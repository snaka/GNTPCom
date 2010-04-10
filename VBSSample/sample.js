var g = new ActiveXObject("GNTPCom.Growler");

g.Init("JScript sample", SA("notify", "warn"));
g.Notify("notify", "Greeting", "Hello, from VBScript!");

var g2 = new ActiveXObject("GNTPCom.Growler");

g2.InitWithAddress("localhost", "secret", "Sample", SA("notify", "warn"));
g2.Notify("notify",
  "My Blog", "今日もスミマセン。",
  "http://www.st-hatena.com/users/sn/snaka72/profile.gif",
  "http://d.hatena.ne.jp/snaka72"
);

// Utility for create SAFEARRAY object
function SA() {
  var temp = new ActiveXObject("Scripting.Dictionary");
  for (var i = 0; i < arguments.length; i++)
    temp.add(i, arguments[i]);
  return temp.Items();
}
