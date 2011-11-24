<div class="user-profile-nodes-view">

<div class="arts-filters">
	<span class="preface">User:</span>
	<a href="?feature=artworks"    class="filter <?php if ($_GET ['feature'] == null || $_GET ['feature'] == 'artworks'): ?>active<?php endif; ?>">Artworks</a>
  <a href="?feature=market"      class="filter <?php if ($_GET ['feature'] == 'market'): ?>active<?php endif; ?>">Market</a>
  <a href="?feature=favourites"  class="filter <?php if ($_GET ['feature'] == 'favourites'): ?>active<?php endif; ?>">Favourites</a>
  <a href="?feature=featured-in" class="filter <?php if ($_GET ['feature'] == 'featured-in'): ?>active<?php endif; ?>">Featured in</a>
</div>

<?php global $no_widgets; $no_widgets = true; ?>

	<?php switch (@$_GET ['feature']):
	
		default:
		case 'artworks':
			print views_embed_view ('Arts', 'user_profile_arts');
			break;
		
		case 'market':
			print views_embed_view ('Marketplace', 'user_profile_items');
  		break;
  		
		case 'favourites':
			print views_embed_view ('Featured', 'user_profile_favourites');
  		break;
  		
  		

  endswitch; ?>

<?php $no_widgets = false; ?>
   
</div>