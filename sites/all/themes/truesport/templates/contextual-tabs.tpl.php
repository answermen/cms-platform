<?php
/**
 * @file
 * Provides view for contexual tabs.
 *
 */
?>
<ul id="contextual-tabs">
  <?php foreach ($buttons as $button): ?>
  <?php if (!empty($button['link'])): ?>
  <li>
    <a class="btn btn-small btn-sm btn-default" href="<?php print $button['link'];?>" title="<?php print $button['title'];?>">
      <span class="glyphicon <?php print $button['icon'];?>"></span>&nbsp;<?php print $button['title'];?>
    </a>
  </li>
  <?php elseif (!empty($button['render'])): ?>
  <li>
    <?php print $button['render']; ?>
  </li>
  <?php endif; ?>
  <?php endforeach; ?>
  <?php if (!empty($links)): ?>
    <li class="dropdown">
      <a class="dropdown-toggle btn btn-small btn-sm btn-default" id="contextual-dropdown" data-toggle="dropdown" href="#" title="<?php print $title?>">
        <span class="glyphicon glyphicon-cog"></span><span><?php print t('Configure');?></span>
      </a>
      <ul class="dropdown-menu" role="menu" aria-labelledby="contextual-dropdown">
        <li class="dropdown-column"><?php print $links; ?></li>
      </ul>
    </li>
  <?php endif; ?>
</ul>
