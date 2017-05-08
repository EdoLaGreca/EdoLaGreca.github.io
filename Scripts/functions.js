function returnToHome() {
    window.location.href = "../home.html";
}

function openInNewTab(url) {
  var win = window.open(url, '_blank');
  win.focus();
}

/*
function isMob(pageName) { 
 if( navigator.userAgent.match(/Android/i)
 || navigator.userAgent.match(/webOS/i)
 || navigator.userAgent.match(/iPhone/i)
 || navigator.userAgent.match(/iPad/i)
 || navigator.userAgent.match(/iPod/i)
 || navigator.userAgent.match(/BlackBerry/i)
 || navigator.userAgent.match(/Windows Phone/i)
 ){
    window.location.href = pageName;
  }
 else {
    return false;
  }
}
*/