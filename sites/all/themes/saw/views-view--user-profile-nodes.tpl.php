<div class="user-profile-nodes-view">

<?php
/*
<div class="arts-filters">
	<span class="preface">User:</span>
	<a href="?feature=artworks"    class="filter <?php if ($_GET ['feature'] == null || $_GET ['feature'] == 'artworks'): ?>active<?php endif; ?>">Artworks</a>
  <a href="?feature=market"      class="filter <?php if ($_GET ['feature'] == 'market'): ?>active<?php endif; ?>">Market</a>
  <a href="?feature=favourites"  class="filter <?php if ($_GET ['feature'] == 'favourites'): ?>active<?php endif; ?>">Favourites</a>
  <a href="?feature=featured-in" class="filter <?php if ($_GET ['feature'] == 'featured-in'): ?>active<?php endif; ?>">Featured in</a>
</div>
*/

$_GET['feature'] = 'artworks';
?>

<table class="artworks">
	<tr>
		<td class="area-left">
		</td>
		<td class="area-middle">

			<?php global $no_widgets; $no_widgets = true; ?>
			
				<?php switch (@$_GET ['feature']):
				
				
					default:
					case 'artworks':
						global $no_user_name; $no_user_name = true;
						
						print views_embed_view ('Arts', 'user_profile_arts', (arg (1) == 'me') ? $user -> uid  : arg(1));
						break;
					
					case 'market':
						print views_embed_view ('Marketplace', 'user_profile_items');
			  		break;
			  		
					case 'favourites':
						print views_embed_view ('Featured', 'user_profile_favourites');
			  		break;
			  		
			  		
			  endswitch; ?>
			
			<?php $no_widgets = false; ?>
      
    </td>
		<td class="area-right">
		</td>
  </tr>
</table>
   
</div>