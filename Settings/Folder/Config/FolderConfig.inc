;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]

[Variables]
CustomAppPosition=6

FolderNumber=3

@IncludeCommunityAppSubMenuMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppSubMenuMeters.inc

FlatTopShape=

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[InfoStyle]
LeftMouseDownAction=#Action0#

[IconStyle]

[ArrowStyleB]
Hidden=1

;-----------------------------------------

[1]
MeterStyle=#DefaultMeterStyle#

[2]
MeterStyle=#DefaultMeterStyle#

[3]
MeterStyle=#DefaultMeterStyle#

[4]
MeterStyle=#DefaultMeterStyle#

[5]
MeterStyle=#DefaultMeterStyle#

[6]
MeterStyle=#DefaultMeterStyle#

[7]
MeterStyle=#DefaultMeterStyle#

[8]
MeterStyle=#DefaultMeterStyle#

[9]
MeterStyle=#DefaultMeterStyle#

[10]
MeterStyle=#DefaultMeterStyle#

;-----------------------------------------

[1Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[2Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[3Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[4Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[5Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[6Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[7Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[8Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[9Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[10Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

;-----------------------------------------

[DividerStyle]
Shape=#DividerShapeSub#
Y=(#NumberOfItems#>[##CURRENTSECTION#]?([[##CURRENTSECTION#]:Y]+#DropdownItemHeight#+#DividerSpace#):0)
Hidden=(#NumberOfItems#>[##CURRENTSECTION#]?(([#DividerExists[##CURRENTSECTION#]]-1)*-1):1)
Container=AnimationContainer
DynamicVariables=1

[Divider1]
Meter=Shape
MeterStyle=DividerStyle

[Divider2]
Meter=Shape
MeterStyle=DividerStyle

[Divider3]
Meter=Shape
MeterStyle=DividerStyle

[Divider4]
Meter=Shape
MeterStyle=DividerStyle

[Divider5]
Meter=Shape
MeterStyle=DividerStyle

[Divider6]
Meter=Shape
MeterStyle=DividerStyle

[Divider7]
Meter=Shape
MeterStyle=DividerStyle

[Divider8]
Meter=Shape
MeterStyle=DividerStyle

[Divider9]
Meter=Shape
MeterStyle=DividerStyle


;[InputBox3]
;Meter=Shape
;Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,(6*#DroptopSize#) | StrokeWidth 0.5 | Extend FillColor
;FillColor=Fill Color 255,255,255,205 | Stroke Color 0,0,0,55
;X=1
;Y=((#DropdownIconYoffset#)-((#DropdownIconYoffset#)%1)+#DropdownItemYOffset#)
;Group=InputBox
;DynamicVariables=1
;Hidden=1

[InputStyle3]
Text=[#[#InputName3]]
InlineSetting2=
FontColor=0,0,0,255
TrailingSpaces=1
LeftMouseDownAction=[!SetOptionGroup InputBox FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeterGroup InputBox][!Redraw][!SetOption MICaret Y ([#CURRENTSECTION#:Y]+(#DropdownItemHeight#/2))][!SetOption #CURRENTSECTION# Text "[#Input3]"][!SetOption InputHandler MainMeterName "#CURRENTSECTION#"][!SetOption InputHandler TargetVariableName "[#InputName3]"][!SetOption InputHandler ContainingFilePath "[#InputLoc3]"][!UpdateMeasure InputHandler][!CommandMeasure InputHandler Initiate()][!DisableMouseAction #CURRENTSECTION# "MouseLeaveAction"][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption InputBox3 FillColor "255,255,255,255 | Stroke Color 0,0,0,255"][!UpdateMeter InputBox3][!Redraw]
MouseOverAction=[!SetOption InputBox3 FillColor "Fill Color 255,255,255,255 | Stroke Color 0,0,0,155"][!UpdateMeter InputBox3][!Redraw]
MouseLeaveAction=[!SetOption InputBox3 FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeter InputBox3][!Redraw]
