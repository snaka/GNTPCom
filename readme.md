# GNTP/Com #
COM component for GNTP

## What's this ##
This is COM componet for GNTP send.

## Install ##

1. Download zip file [here](http://github.com/snaka/GNTPCom/downloads)
2. Unzip file
3. Run install.bat

## Usage ##

### With VBScript ###

<pre>set g = CreateObject("GNTPCom.Growler")
g.Init "Sample", Array("notify", "warn", "error")
g.Notify "notify", "Greeting", "Hello, from VBScript!"
set g = Nothing

set g2 = CreateObject("GNTPCom.Growler")
g2.InitWithAddress "localhost", "secret", "Sample", Array("notify", "warn")
g2.Notify "notify", _
          "My Blog", "今日もスミマセン。", _
          "http://www.st-hatena.com/users/sn/snaka72/profile.gif", _
          "http://d.hatena.ne.jp/snaka72"
set g2 = Nothing</pre>

### With JScript ###

<pre>var g = new ActiveXObject("GNTPCom.Growler");

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
}</pre>

### Use UDP protocol (Mac Growl compatible) ###

<pre>set g = CreateObject("GNTPCom.Growler")
g.UseUDP = true
g.InitWithAddress "192.168.0.xxx", "", "Sample", Array("notify", "warn", "error")
g.Notify "notify", "Greeting", "Hello, from VBScript!"
set g = Nothing</pre>

[Growl on Mac](http://gyazo.com/edd232c3404fdae2a98bf4cee00525ff.png)

## License ##

The MIT License

Copyright (c) 2010 snaka

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

