<?php
/**
 * @file
 * cms_platform_default_blocks.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function cms_platform_default_blocks_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'SHARE - Sidebar',
    'description' => NULL,
    'title' => '',
    'type' => 'custom_content_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'share---sidebar',
    'view_mode' => 'default',
    'created' => 1418660273,
    'log' => '',
    'uid' => 0,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '5f1468e4-c975-4871-82cd-b5c0cdec8eaa',
    'uuid' => '9b1f865a-7f3c-49af-a1f1-2be455be2084',
    'field_custom_content' => array(
      'en' => array(
        0 => array(
          'value' => '<div class="share clearfix">
					  	<span class="label">Share</span>
					  	<a href="#" class="mail"></a>
					  	<div class="fb-like fb_iframe_widget" data-href="" data-layout="button_count" data-action="like" data-show-faces="false" data-share="false" fb-xfbml-state="rendered" fb-iframe-plugin-query="action=like&amp;app_id=&amp;href=http%3A%2F%2Fcms.dev%2Fsites%2Fall%2Fthemes%2Ftruesport%2Fsupplied_html%2Fpage.html&amp;layout=button_count&amp;locale=en_US&amp;sdk=joey&amp;share=false&amp;show_faces=false"><span style="vertical-align: bottom; width: 76px; height: 20px;"><iframe name="f2dc22c648" width="1000px" height="1000px" frameborder="0" allowtransparency="true" scrolling="no" title="fb:like Facebook Social Plugin" src="http://www.facebook.com/v2.0/plugins/like.php?action=like&amp;app_id=&amp;channel=http%3A%2F%2Fstatic.ak.facebook.com%2Fconnect%2Fxd_arbiter%2F7r8gQb8MIqE.js%3Fversion%3D41%23cb%3Df800f535c%26domain%3Dcms.dev%26origin%3Dhttp%253A%252F%252Fcms.dev%252Ff2db893d88%26relation%3Dparent.parent&amp;href=http%3A%2F%2Fcms.dev%2Fsites%2Fall%2Fthemes%2Ftruesport%2Fsupplied_html%2Fpage.html&amp;layout=button_count&amp;locale=en_US&amp;sdk=joey&amp;share=false&amp;show_faces=false" class="" style="border: none; visibility: visible; width: 76px; height: 20px;"></iframe></span></div>
					  	
					  	<iframe id="twitter-widget-0" scrolling="no" frameborder="0" allowtransparency="true" src="http://platform.twitter.com/widgets/tweet_button.ff7d9077a26377d36b6a53b1a95be617.en.html#_=1418660178894&amp;count=horizontal&amp;id=twitter-widget-0&amp;lang=en&amp;original_referer=http%3A%2F%2Fcms.dev%2Fsites%2Fall%2Fthemes%2Ftruesport%2Fsupplied_html%2Fpage.html&amp;size=m&amp;text=True%20Sport&amp;url=http%3A%2F%2Fcms.dev%2Fsites%2Fall%2Fthemes%2Ftruesport%2Fsupplied_html%2Fpage.html&amp;via=TrueSportTru" class="twitter-share-button twitter-tweet-button twitter-share-button twitter-count-horizontal" title="Twitter Tweet Button" data-twttr-rendered="true" style="width: 107px; height: 20px;"></iframe>
<script id="facebook-jssdk" src="//connect.facebook.net/en_US/sdk.js#xfbml=1&amp;version=v2.0"></script><script id="twitter-wjs" src="http://platform.twitter.com/widgets.js"></script><script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],p=/^http:/.test(d.location)?\'http\':\'https\';if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src=p+\'://platform.twitter.com/widgets.js\';fjs.parentNode.insertBefore(js,fjs);}}(document, \'script\', \'twitter-wjs\');</script>
				  	</div>',
          'format' => 'ds_code',
        ),
      ),
    ),
    'field_read_more_link' => array(),
    'title_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'format' => NULL,
          'safe_value' => '',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'url_alias' => array(),
  );
  return $beans;
}
