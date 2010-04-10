VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "GNTP/COM sample"
   ClientHeight    =   2550
   ClientLeft      =   60
   ClientTop       =   405
   ClientWidth     =   4365
   LinkTopic       =   "Form1"
   ScaleHeight     =   2550
   ScaleWidth      =   4365
   StartUpPosition =   3  'Windows の既定値
   Begin VB.ComboBox cmbType 
      Height          =   300
      ItemData        =   "Form1.frx":0000
      Left            =   960
      List            =   "Form1.frx":0002
      Style           =   2  'ﾄﾞﾛｯﾌﾟﾀﾞｳﾝ ﾘｽﾄ
      TabIndex        =   10
      Top             =   1560
      Width           =   1695
   End
   Begin VB.TextBox txtIcon 
      Height          =   270
      Left            =   960
      TabIndex        =   8
      Text            =   "http://www.st-hatena.com/users/sn/snaka72/profile.gif"
      Top             =   1200
      Width           =   3255
   End
   Begin VB.TextBox txtURL 
      Height          =   270
      Left            =   960
      TabIndex        =   7
      Text            =   "http://d.hatena.ne.jp/snaka72/"
      Top             =   840
      Width           =   3255
   End
   Begin VB.TextBox txtMsgText 
      Height          =   270
      Left            =   960
      TabIndex        =   6
      Text            =   "Hello, Growl for Windows!"
      Top             =   480
      Width           =   3255
   End
   Begin VB.TextBox txtTitle 
      Height          =   270
      Left            =   960
      TabIndex        =   5
      Text            =   "Test"
      Top             =   120
      Width           =   3255
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Notify"
      Height          =   495
      Left            =   120
      TabIndex        =   0
      Top             =   1920
      Width           =   4095
   End
   Begin VB.Label lblNotificationType 
      Caption         =   "Type"
      Height          =   255
      Left            =   120
      TabIndex        =   9
      Top             =   1560
      Width           =   735
   End
   Begin VB.Label lblIcon 
      Caption         =   "Icon"
      Height          =   255
      Left            =   120
      TabIndex        =   4
      Top             =   1200
      Width           =   735
   End
   Begin VB.Label lblURL 
      Caption         =   "URL"
      Height          =   255
      Left            =   120
      TabIndex        =   3
      Top             =   840
      Width           =   735
   End
   Begin VB.Label lblText 
      Caption         =   "Text"
      Height          =   255
      Left            =   120
      TabIndex        =   2
      Top             =   480
      Width           =   735
   End
   Begin VB.Label lblTitle 
      Caption         =   "Title"
      Height          =   255
      Left            =   120
      TabIndex        =   1
      Top             =   120
      Width           =   735
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim g As GNTPComLib.Growler

Private Sub Form_Load()
    Dim notifications(0 To 1) As String
    notifications(0) = "notify"
    notifications(1) = "warn"
    
'    Set g = New GNTPComLib.Growler
    Set g = CreateObject("GNTPCom.Growler")
    g.Init "Growlサンプル", notifications
    'g.Init "Growlサンプル", Array("notify", "warn")
    
    Dim i As Integer
    For i = 0 To UBound(notifications)
        cmbType.AddItem notifications(i)
    Next
    
End Sub

Private Sub Form_Unload(Cancel As Integer)
    Set g = Nothing
End Sub

Private Sub Command1_Click()
    
    g.Notify cmbType.Text, txtTitle, txtMsgText, txtIcon, txtURL
    
End Sub

