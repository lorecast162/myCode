var r,g,b;
r=g=b=0;

var color;

var state = 1;

$(document).ready(function () {
//    $("#text").text('test').css("color", "red").fadeOut("slow")
    $("#butt1").click(function (){
	$("#text").fadeOut("slow")
	$("#swoosh").text("TEST1 Clicked")
    })
    $("#butt2").click(function(){
	$("#text").fadeIn("slow")
	$("#swoosh").text("TEST2 Clicked")
    })
    $("#bowiebutt").click(function(){
	$(".bowie2").animate({
	    left: 0.25
	}, 2000, function() {
	    $(".bowie2").text("BAZOOMBA")

	    $("body").css("background-color", "gray")


	})
    })
    $("#flipper").click(function(){
	if (state) state = 0;
	else state = 1;	
    })
})

function sleep(milliseconds) {
  var start = new Date().getTime();
  for (var i = 0; i < 1e7; i++) {
    if ((new Date().getTime() - start) > milliseconds){
      break;
    }
  }
}
