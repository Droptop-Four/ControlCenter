; -------------------------------
; Measures
; -------------------------------

[MeasureRegistry]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\Microsoft\Windows\CurrentVersion\Themes\Personalize
RegValue=AppsUseLightTheme
Substitute="0":"Dark Mode","1":"Light Mode"
UpdateDivider=-1

[RunCommand.ToggleLightMode]
Measure=Plugin
Plugin=RunCommand
Parameter=reg add "HKEY_CURRENT_USER\SOFTWARE\Microsoft\Windows\CurrentVersion\Themes\Personalize" /v SystemUsesLightTheme /t REG_DWORD /d [MeasureRegistry] /f
State=Hide
OutputType=ANSI
OutputFile=
DynamicVariables=1

[MeasureRegistryApp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\Microsoft\Windows\CurrentVersion\Themes\Personalize
RegValue=AppsUseLightTheme
Substitute="0":"Temp","1":"0","Temp":"1"
UpdateDivider=-1
IfCondition=([MeasureRegistryApp]=1)
IfTrueAction=[!SetOption MeterToggleLightMode ImageName "#CURRENTPATH#Images\darkmode.png"][!UpdateMeter *][!Redraw]
IfFalseAction=[!SetOption MeterToggleLightMode ImageName "#CURRENTPATH#Images\lightmode.png"][!UpdateMeter *][!Redraw]
DynamicVariables=1

[RunCommand.ToggleLightModeApp]
Measure=Plugin
Plugin=RunCommand
Parameter=reg add "HKEY_CURRENT_USER\SOFTWARE\Microsoft\Windows\CurrentVersion\Themes\Personalize" /v AppsUseLightTheme /t REG_DWORD /d [MeasureRegistryApp] /f
State=Hide
OutputType=ANSI
OutputFile=
DynamicVariables=1

[MeasureWifi]
Measure=Plugin
Plugin=WiFiStatus
WiFiInfoType=SSID

[ControlCenter.Backlight]
Measure=Plugin
Plugin=Backlight
Divide=100
UpdateDivider=-1

[MeasureMouse]
Measure=Plugin
Plugin=Mouse
;LeftMouseDragAction=[!SetOption SliderDragCalc Formula "(Clamp((($MouseX$-(30*#DroptopSize#))/[SliderSizeCalc]),0,100))"][!UpdateMeasure SliderDragCalc][!CommandMeasure ControlCenter.Backlight "SetBacklight [SliderDragCalc]"][!UpdateMeasure ControlCenter.Backlight][!Update]
LeftMouseDragAction=[!SetOption SliderDragCalc Formula "(Clamp((($MouseX$-5)/[SliderSizeCalc]),0,100))"][!UpdateMeasure SliderDragCalc][!CommandMeasure ControlCenter.Backlight "SetBacklight [SliderDragCalc]"][!UpdateMeasure ControlCenter.Backlight][!Update]
LeftMouseUpAction=[!CommandMeasure MeasureMouse "Stop"][!SetOption SliderDragCalc Formula "ControlCenter.Backlight"][!UpdateMeasure ControlCenter.Backlight][!Update]
RelativeToSkin=1
RequireDragging=1
DynamicVariables=1
UpdateDivider=-1

[SliderDragCalc]
Measure=Calc
Formula=ControlCenter.Backlight

[SliderSizeCalc]
Measure=Calc
Formula=(4.5*#DroptopSize#)

[Mouse]
Measure=Plugin
Plugin=Mouse
LeftMouseDragAction=[!SetOption perc Formula "(Round(Clamp($MouseX$-(25*#DroptopSize#),0,#width#)/(#width#/100)))"][!Update][!Redraw]
LeftMouseUpAction=[!CommandMeasure mouse "Stop"]
RelativeToSkin=1
RequireDragging=1
DynamicVariables=1
UpdateDivider=-1

[ControlCenter-mVolume]
Measure=Plugin
Plugin=Win7AudioPlugin

[perc]
Measure=Calc
Formula=[ControlCenter-mVolume:]
OnChangeAction=[!CommandMeasure ControlCenter-mVolume "SetVolume [#CurrentSection#:]"]
DynamicVariables=1

;--------------------------------

[ControlCenter-Artist]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Artist
OnChangeAction=[!UpdateMeter *][!Redraw]
DynamicVariables=1

[ControlCenter-Title]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Title
Substitute="":"Music"
OnChangeAction=[!UpdateMeter *][!Redraw]

[ControlCenter-AlbumArt]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Cover
DefaultPath=#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Images\music_macos.png
UpdateDivider= 5
OnUpdateAction=[!UpdateMeter *][!Redraw]

[ControlCenter-Position]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Position

[ControlCenter-StateButton]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=STATE
Substitute="0":"#CURRENTPATH#Images\Play.png","1":"#CURRENTPATH#Images\Pause.png","2":"#CURRENTPATH#Images\Play.png"
DynamicVariables=1
OnChangeAction=[!UpdateMeter *][!Redraw]

[ControlCenter-Duration]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Duration

[ControlCenter-ProgressCalc]
Measure=Calc
Formula=Round(ControlCenter-Position/ControlCenter-Duration)
;Disabled=1
