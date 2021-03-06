<?php

class MediaFeaturesBuilder extends FeaturesBuilderBase {

  protected $dependencies = array(
    'ctools',
    'features',
    'filter',
    'image',
    'strongarm',
  );
  protected $variables = array(
    'file_default_scheme',
    'filter_fallback_format',
    'image_jpeg_quality',
    'image_toolkit',
  );

  public static function listFeatures() {
    return array('media' => t('Media'));
  }
  
  /**
   * {@inheritdoc}
   */
  public function package() {
    return 'Configuration';
  }

  protected function setComponents() {
    $this->setAllComponents('filter');
    $this->setAllComponents('image');
    $this->setNamedComponents('variable', $this->variables);
    $this->setAllComponents('wysiwyg');

    // Add in modules utilized by any of the filters.
    if (!empty($this->components['filter'])) {
      foreach ($this->components['filter'] as $format_id => $name) {
        if ($format = filter_format_load($format_id)) {
          $filters = filter_list_format($format->format);
          foreach ($filters as $filter) {
            $this->dependencies[] = $filter->module;
          }
        }
      }
    }

    if (!empty($this->components['wysiwyg'])) {
      $this->dependencies[] = 'wysiwyg';
    }

    if (module_exists('imce')) {
      $this->dependencies[] = 'imce';
      $this->setRegexComponents('variable', '/imce_.+/');
    }

    if (module_exists('linkit')) {
      $this->dependencies[] = 'linkit';
      $this->setAllComponents('linkit_profiles');
    }

    $this->setNamedComponents('dependencies', array_filter($this->dependencies));
  }

}
