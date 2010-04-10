set g = CreateObject("GNTPCom.Growler")
g.Init "Sample", Array("notify", "warn", "error")
g.Notify "notify", "Greeting", "Hello, from VBScript!"
set g = Nothing

set g2 = CreateObject("GNTPCom.Growler")
g2.InitWithAddress "localhost", "secret", "Sample", Array("notify", "warn")
g2.Notify "notify", _
          "My Blog", "今日もスミマセン。", _
          "http://www.st-hatena.com/users/sn/snaka72/profile.gif", _
          "http://d.hatena.ne.jp/snaka72"
set g2 = Nothing
