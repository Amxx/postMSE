// init particles
var w = window;
var d = document
var e = d.documentElement
var g = d.getElementsByTagName("body")[0]
var x = w.innerWidth||e.clientWidth||g.clientWidth
var y = w.innerHeight||e.clientHeight||g.clientHeight;
custom_nb=40;
if (x<=480        ) { custom_nb=20;  }
if (x>481&&x<=768 ) { custom_nb=40;  }
if (x>769&&x<=992 ) { custom_nb=100; }
if (x>993&&x<=1200) { custom_nb=120; }
if (x>1201        ) { custom_nb=140; }

$(function(){
	particlesJS(
		"particles-header-wrapper",
		{
			particles:
			{
				color: "#fff",
				color_random: false,
				shape: "circle",
				opacity:
				{
					opacity: 1,
					anim:
					{
						enable: true,
						speed: 1.5,
						opacity_min: 0,
						sync: false
					}
				},
				size: 5,
				size_random: true,
				nb: custom_nb,
				line_linked:
				{
					enable_auto: true,
					distance: 100,
					color:"#fff",
					opacity: 1,
					width: 1,
					condensed_mode:
					{
						enable: false,
						rotateX: 600,
						rotateY: 600
					}
				},
				anim:
				{
					enable: true,
					speed: 1
				}
			},
			interactivity:
			{
				enable: false,
				mouse:
				{
					distance: 300
				},
				detect_on: "canvas",
				mode: "grab",
				line_linked:
				{
					opacity: .4
				},
				events:
				{
					onclick:
					{
						enable: false,
						mode: "push",
						nb: 4
					},
					onresize:
					{
						enable: true,
						mode: "bounce",
						density_auto: false,
						density_area: 800
					}
				}
			},
			retina_detect: false
		}
	);
});
