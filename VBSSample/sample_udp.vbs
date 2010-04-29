set g = CreateObject("GNTPCom.Growler")
g.UseUDP = true
g.InitWithAddress "192.168.1.99", "", "Sample", Array("notify", "warn", "error")
g.Notify "notify", "Greeting", "Hello, from VBScript!"
set g = Nothing
