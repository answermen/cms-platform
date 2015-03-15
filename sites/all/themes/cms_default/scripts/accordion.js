  jQuery(function() {
    jQuery( "#accordion" ).accordion({ header: "h3", collapsible: true, active: true });
  });
  
  
jQuery(document).ready(function() {
  jQuery( ".breadcrumb" ).insertAfter( jQuery( ".page-content h2:first-child" ) );
  jQuery( "#contextual-tabs" ).insertAfter( jQuery( ".page-content h2:first-child" ) );
    jQuery( ".breadcrumb" ).insertAfter( jQuery( "#content #page-title" ) );
  jQuery( "#contextual-tabs" ).insertAfter( jQuery( "#content #page-title" ) );
});