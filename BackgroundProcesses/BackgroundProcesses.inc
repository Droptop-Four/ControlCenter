[Rainmeter]


[Variables]
;----------------------------------------------------
; # # ADD BACKGROUND PROCESSES BELOW # # # # # # # #
; # # Measures that run even when the app isn't open
;----------------------------------------------------

;----------------------------------------------------------------------
; Example # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
; Updates the top bar when CPU temperature changes
; 
; UpdateDivider=10 rechecks the temperature every 10 seconds
; Recommended this number be no lower than 10 to prevent high CPU usage
;----------------------------------------------------------------------

[ControlCenter-TheyCallMePapa_MeasureWeather]
Measure=WebParser
URL=https://api.weatherapi.com/v1/current.json?key=#CCAPIKey#&q=#City#&aqi=no
RegExp=(?siU)"temp_#TempSymbol#":(.*),.*"text":"(.*)","icon":"(.*)".*
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/92.0.4515.159 Safari/537.36 Edg/92.0.902.84
UpdateRate=300
DynamicVariables=1
FinishAction=[!WritekeyValue Variables WeatherTemp [&ControlCenter-TheyCallMePapa_MeasureCurrentTemp] "#SKINSPATH#Droptop Community Apps\Apps\ControlCenter-TheyCallMePapa\Variables\Variables.inc"][!WritekeyValue Variables WeatherIcon [&ControlCenter-TheyCallMePapa_MeasureWeatherIcons] "#SKINSPATH#Droptop Community Apps\Apps\ControlCenter-TheyCallMePapa\Variables\Variables.inc"][!WritekeyValue Variables WeatherName [&ControlCenter-TheyCallMePapa_MeasureWeatherName] "#SKINSPATH#Droptop Community Apps\Apps\ControlCenter-TheyCallMePapa\Variables\Variables.inc"]

[TCPIn]
Measure=NetIn
Interface=Best
AverageSize=5

[ControlCenter-TheyCallMePapa_MeasureCurrentTemp]
Measure=WebParser
URL=[ControlCenter-TheyCallMePapa_MeasureWeather]
StringIndex=1
DynamicVariables=1
RegExpSubstitute=1
Substitute="\.(.*)":""

[ControlCenter-TheyCallMePapa_MeasureWeatherName]
Measure=Plugin
Plugin=WebParser
URL=[ControlCenter-TheyCallMePapa_MeasureWeather]
StringIndex=2
DynamicVariables=1

[ControlCenter-TheyCallMePapa_MeasureWeatherIcons]
Measure=WebParser
URL=[ControlCenter-TheyCallMePapa_MeasureWeather]
StringIndex=3

[ControlCenter-TheyCallMePapa_DownloadWeatherIcon]
Measure=WebParser
URL=https:#WeatherIcon#
Download=1
DownloadFile=current.png
;DownloadFile=#SKINSPATH#Droptop Community Apps\Apps\ControlCenter-TheyCallMePapa\Icons\current.png

[ControlCenter-TheyCallMePapa_MeasureNetwork]
Measure=Plugin
Plugin=SysInfo
SysInfoType=INTERNET_CONNECTIVITY
SysInfoData=1
Substitute="-1":"Not Connected","1":"Connected"
OnUpdateAction=[!WritekeyValue Variables NetworkStatus [&ControlCenter-TheyCallMePapa_MeasureNetwork] "#SKINSPATH#Droptop Community Apps\Apps\ControlCenter-TheyCallMePapa\Variables\Variables.inc"]
OnChangeAction=[!WritekeyValue Variables NetworkStatus [&ControlCenter-TheyCallMePapa_MeasureNetwork] "#SKINSPATH#Droptop Community Apps\Apps\ControlCenter-TheyCallMePapa\Variables\Variables.inc"]
UpdateDivider=10
