;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]

[Variables]
CustomAppPosition=6

FolderNumber=3

@IncludeCommunityAppSubMenuMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppSubMenuMeters.inc

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[InfoStyle]
LeftMouseDownAction=#Action0#

[IconStyle]

[ArrowStyleB]
Hidden=1

[Background]
Shape2=

[HighlightBackground]

[HighlightSelected]

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

[11]
MeterStyle=#DefaultMeterStyle#

[12]
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

[11Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[12Icon]
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

[Divider10]
Meter=Shape
MeterStyle=DividerStyle

[Divider11]
Meter=Shape
MeterStyle=DividerStyle

;-----------------------------------------

[InputBox3]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,(6*#DroptopSize#) | StrokeWidth 0.5 | Extend FillColor
FillColor=Fill Color 255,255,255,205 | Stroke Color 0,0,0,55
X=1
Y=((#DropdownIconYoffset#)-((#DropdownIconYoffset#)%1)+#DropdownItemYOffset#)
Group=InputBox
DynamicVariables=1
Hidden=1
Container=AnimationContainer

[InputBox4]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,(6*#DroptopSize#) | StrokeWidth 0.5 | Extend FillColor
FillColor=Fill Color 255,255,255,205 | Stroke Color 0,0,0,55
X=1
Y=((#DropdownIconYoffset#)-((#DropdownIconYoffset#)%1)+#DropdownItemYOffset#)
Group=InputBox
DynamicVariables=1
Hidden=1
Container=AnimationContainer

[InputBox5]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,(6*#DroptopSize#) | StrokeWidth 0.5 | Extend FillColor
FillColor=Fill Color 255,255,255,205 | Stroke Color 0,0,0,55
X=1
Y=((#DropdownIconYoffset#)-((#DropdownIconYoffset#)%1)+#DropdownItemYOffset#)
Group=InputBox
DynamicVariables=1
Hidden=1
Container=AnimationContainer

[InputBox6]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,(6*#DroptopSize#) | StrokeWidth 0.5 | Extend FillColor
FillColor=Fill Color 255,255,255,205 | Stroke Color 0,0,0,55
X=1
Y=((#DropdownIconYoffset#)-((#DropdownIconYoffset#)%1)+#DropdownItemYOffset#)
Group=InputBox
DynamicVariables=1
Hidden=1
Container=AnimationContainer

[InputBox7]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,(6*#DroptopSize#) | StrokeWidth 0.5 | Extend FillColor
FillColor=Fill Color 255,255,255,205 | Stroke Color 0,0,0,55
X=1
Y=((#DropdownIconYoffset#)-((#DropdownIconYoffset#)%1)+#DropdownItemYOffset#)
Group=InputBox
DynamicVariables=1
Hidden=1
Container=AnimationContainer

[InputBox8]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,(6*#DroptopSize#) | StrokeWidth 0.5 | Extend FillColor
FillColor=Fill Color 255,255,255,205 | Stroke Color 0,0,0,55
X=1
Y=((#DropdownIconYoffset#)-((#DropdownIconYoffset#)%1)+#DropdownItemYOffset#)
Group=InputBox
DynamicVariables=1
Hidden=1
Container=AnimationContainer

[InputBox9]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,(6*#DroptopSize#) | StrokeWidth 0.5 | Extend FillColor
FillColor=Fill Color 255,255,255,205 | Stroke Color 0,0,0,55
X=1
Y=((#DropdownIconYoffset#)-((#DropdownIconYoffset#)%1)+#DropdownItemYOffset#)
Group=InputBox
DynamicVariables=1
Hidden=1
Container=AnimationContainer

[InputBox10]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,(6*#DroptopSize#) | StrokeWidth 0.5 | Extend FillColor
FillColor=Fill Color 255,255,255,205 | Stroke Color 0,0,0,55
X=1
Y=((#DropdownIconYoffset#)-((#DropdownIconYoffset#)%1)+#DropdownItemYOffset#)
Group=InputBox
DynamicVariables=1
Hidden=1
Container=AnimationContainer

[InputBox11]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,(6*#DroptopSize#) | StrokeWidth 0.5 | Extend FillColor
FillColor=Fill Color 255,255,255,205 | Stroke Color 0,0,0,55
X=1
Y=((#DropdownIconYoffset#)-((#DropdownIconYoffset#)%1)+#DropdownItemYOffset#)
Group=InputBox
DynamicVariables=1
Hidden=1
Container=AnimationContainer

[InputBox12]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,(6*#DroptopSize#) | StrokeWidth 0.5 | Extend FillColor
FillColor=Fill Color 255,255,255,205 | Stroke Color 0,0,0,55
X=1
Y=((#DropdownIconYoffset#)-((#DropdownIconYoffset#)%1)+#DropdownItemYOffset#)
Group=InputBox
DynamicVariables=1
Hidden=1
Container=AnimationContainer

[InputBox13]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,(6*#DroptopSize#) | StrokeWidth 0.5 | Extend FillColor
FillColor=Fill Color 255,255,255,205 | Stroke Color 0,0,0,55
X=1
Y=((#DropdownIconYoffset#)-((#DropdownIconYoffset#)%1)+#DropdownItemYOffset#)
Group=InputBox
DynamicVariables=1
Hidden=1
Container=AnimationContainer

[InputBox14]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,(6*#DroptopSize#) | StrokeWidth 0.5 | Extend FillColor
FillColor=Fill Color 255,255,255,205 | Stroke Color 0,0,0,55
X=1
Y=((#DropdownIconYoffset#)-((#DropdownIconYoffset#)%1)+#DropdownItemYOffset#)
Group=InputBox
DynamicVariables=1
Hidden=1
Container=AnimationContainer

;-----------------------------------------

[InputStyle3]
Text=[#[#InputName3]]
InlineSetting2=
FontColor=0,0,0,255
TrailingSpaces=1
LeftMouseDownAction=[!SetOptionGroup InputBox FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeterGroup InputBox][!Redraw][!SetOption MICaret Y ([#CURRENTSECTION#:Y]+(#DropdownItemHeight#/2))][!SetOption #CURRENTSECTION# Text "[#Input3]"][!SetOption InputHandler MainMeterName "#CURRENTSECTION#"][!SetOption InputHandler TargetVariableName "[#InputName3]"][!SetOption InputHandler ContainingFilePath "[#InputLoc3]"][!UpdateMeasure InputHandler][!CommandMeasure InputHandler Initiate()][!DisableMouseAction #CURRENTSECTION# "MouseLeaveAction"][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption InputBox3 FillColor "255,255,255,255 | Stroke Color 0,0,0,255"][!UpdateMeter InputBox3][!Redraw]
MouseOverAction=[!SetOption InputBox3 FillColor "Fill Color 255,255,255,255 | Stroke Color 0,0,0,155"][!UpdateMeter InputBox3][!Redraw]
MouseLeaveAction=[!SetOption InputBox3 FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeter InputBox3][!Redraw]
Container=AnimationContainer

[InputStyle4]
Text=[#[#InputName4]]
InlineSetting2=
FontColor=0,0,0,255
TrailingSpaces=1
LeftMouseDownAction=[!SetOptionGroup InputBox FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeterGroup InputBox][!Redraw][!SetOption MICaret Y ([#CURRENTSECTION#:Y]+(#DropdownItemHeight#/2))][!SetOption #CURRENTSECTION# Text "[#Input4]"][!SetOption InputHandler MainMeterName "#CURRENTSECTION#"][!SetOption InputHandler TargetVariableName "[#InputName4]"][!SetOption InputHandler ContainingFilePath "[#InputLoc4]"][!UpdateMeasure InputHandler][!CommandMeasure InputHandler Initiate()][!DisableMouseAction #CURRENTSECTION# "MouseLeaveAction"][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption InputBox4 FillColor "255,255,255,255 | Stroke Color 0,0,0,255"][!UpdateMeter InputBox4][!Redraw]
MouseOverAction=[!SetOption InputBox4 FillColor "Fill Color 255,255,255,255 | Stroke Color 0,0,0,155"][!UpdateMeter InputBox4][!Redraw]
MouseLeaveAction=[!SetOption InputBox4 FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeter InputBox4][!Redraw]
Container=AnimationContainer

[InputStyle5]
Text=[#[#InputName5]]
InlineSetting2=
FontColor=0,0,0,255
TrailingSpaces=1
LeftMouseDownAction=[!SetOptionGroup InputBox FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeterGroup InputBox][!Redraw][!SetOption MICaret Y ([#CURRENTSECTION#:Y]+(#DropdownItemHeight#/2))][!SetOption #CURRENTSECTION# Text "[#Input5]"][!SetOption InputHandler MainMeterName "#CURRENTSECTION#"][!SetOption InputHandler TargetVariableName "[#InputName5]"][!SetOption InputHandler ContainingFilePath "[#InputLoc5]"][!UpdateMeasure InputHandler][!CommandMeasure InputHandler Initiate()][!DisableMouseAction #CURRENTSECTION# "MouseLeaveAction"][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption InputBox5 FillColor "255,255,255,255 | Stroke Color 0,0,0,255"][!UpdateMeter InputBox5][!Redraw]
MouseOverAction=[!SetOption InputBox5 FillColor "Fill Color 255,255,255,255 | Stroke Color 0,0,0,155"][!UpdateMeter InputBox5][!Redraw]
MouseLeaveAction=[!SetOption InputBox5 FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeter InputBox5][!Redraw]
Container=AnimationContainer

[InputStyle6]
Text=[#[#InputName6]]
InlineSetting2=
FontColor=0,0,0,255
TrailingSpaces=1
LeftMouseDownAction=[!SetOptionGroup InputBox FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeterGroup InputBox][!Redraw][!SetOption MICaret Y ([#CURRENTSECTION#:Y]+(#DropdownItemHeight#/2))][!SetOption #CURRENTSECTION# Text "[#Input6]"][!SetOption InputHandler MainMeterName "#CURRENTSECTION#"][!SetOption InputHandler TargetVariableName "[#InputName6]"][!SetOption InputHandler ContainingFilePath "[#InputLoc6]"][!UpdateMeasure InputHandler][!CommandMeasure InputHandler Initiate()][!DisableMouseAction #CURRENTSECTION# "MouseLeaveAction"][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption InputBox6 FillColor "255,255,255,255 | Stroke Color 0,0,0,255"][!UpdateMeter InputBox6][!Redraw]
MouseOverAction=[!SetOption InputBox6 FillColor "Fill Color 255,255,255,255 | Stroke Color 0,0,0,155"][!UpdateMeter InputBox6][!Redraw]
MouseLeaveAction=[!SetOption InputBox6 FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeter InputBox6][!Redraw]
Container=AnimationContainer

[InputStyle7]
Text=[#[#InputName7]]
InlineSetting2=
FontColor=0,0,0,255
TrailingSpaces=1
LeftMouseDownAction=[!SetOptionGroup InputBox FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeterGroup InputBox][!Redraw][!SetOption MICaret Y ([#CURRENTSECTION#:Y]+(#DropdownItemHeight#/2))][!SetOption #CURRENTSECTION# Text "[#Input7]"][!SetOption InputHandler MainMeterName "#CURRENTSECTION#"][!SetOption InputHandler TargetVariableName "[#InputName7]"][!SetOption InputHandler ContainingFilePath "[#InputLoc7]"][!UpdateMeasure InputHandler][!CommandMeasure InputHandler Initiate()][!DisableMouseAction #CURRENTSECTION# "MouseLeaveAction"][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption InputBox7 FillColor "255,255,255,255 | Stroke Color 0,0,0,255"][!UpdateMeter InputBox7][!Redraw]
MouseOverAction=[!SetOption InputBox7 FillColor "Fill Color 255,255,255,255 | Stroke Color 0,0,0,155"][!UpdateMeter InputBox7][!Redraw]
MouseLeaveAction=[!SetOption InputBox7 FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeter InputBox7][!Redraw]
Container=AnimationContainer

[InputStyle8]
Text=[#[#InputName8]]
InlineSetting2=
FontColor=0,0,0,255
TrailingSpaces=1
LeftMouseDownAction=[!SetOptionGroup InputBox FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeterGroup InputBox][!Redraw][!SetOption MICaret Y ([#CURRENTSECTION#:Y]+(#DropdownItemHeight#/2))][!SetOption #CURRENTSECTION# Text "[#Input8]"][!SetOption InputHandler MainMeterName "#CURRENTSECTION#"][!SetOption InputHandler TargetVariableName "[#InputName8]"][!SetOption InputHandler ContainingFilePath "[#InputLoc8]"][!UpdateMeasure InputHandler][!CommandMeasure InputHandler Initiate()][!DisableMouseAction #CURRENTSECTION# "MouseLeaveAction"][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption InputBox8 FillColor "255,255,255,255 | Stroke Color 0,0,0,255"][!UpdateMeter InputBox8][!Redraw]
MouseOverAction=[!SetOption InputBox8 FillColor "Fill Color 255,255,255,255 | Stroke Color 0,0,0,155"][!UpdateMeter InputBox8][!Redraw]
MouseLeaveAction=[!SetOption InputBox8 FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeter InputBox8][!Redraw]
Container=AnimationContainer

[InputStyle9]
Text=[#[#InputName9]]
InlineSetting2=
FontColor=0,0,0,255
TrailingSpaces=1
LeftMouseDownAction=[!SetOptionGroup InputBox FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeterGroup InputBox][!Redraw][!SetOption MICaret Y ([#CURRENTSECTION#:Y]+(#DropdownItemHeight#/2))][!SetOption #CURRENTSECTION# Text "[#Input9]"][!SetOption InputHandler MainMeterName "#CURRENTSECTION#"][!SetOption InputHandler TargetVariableName "[#InputName9]"][!SetOption InputHandler ContainingFilePath "[#InputLoc9]"][!UpdateMeasure InputHandler][!CommandMeasure InputHandler Initiate()][!DisableMouseAction #CURRENTSECTION# "MouseLeaveAction"][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption InputBox9 FillColor "255,255,255,255 | Stroke Color 0,0,0,255"][!UpdateMeter InputBox9][!Redraw]
MouseOverAction=[!SetOption InputBox9 FillColor "Fill Color 255,255,255,255 | Stroke Color 0,0,0,155"][!UpdateMeter InputBox9][!Redraw]
MouseLeaveAction=[!SetOption InputBox9 FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeter InputBox9][!Redraw]
Container=AnimationContainer

[InputStyle10]
Text=[#[#InputName10]]
InlineSetting2=
FontColor=0,0,0,255
TrailingSpaces=1
LeftMouseDownAction=[!SetOptionGroup InputBox FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeterGroup InputBox][!Redraw][!SetOption MICaret Y ([#CURRENTSECTION#:Y]+(#DropdownItemHeight#/2))][!SetOption #CURRENTSECTION# Text "[#Input10]"][!SetOption InputHandler MainMeterName "#CURRENTSECTION#"][!SetOption InputHandler TargetVariableName "[#InputName10]"][!SetOption InputHandler ContainingFilePath "[#InputLoc10]"][!UpdateMeasure InputHandler][!CommandMeasure InputHandler Initiate()][!DisableMouseAction #CURRENTSECTION# "MouseLeaveAction"][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption InputBox10 FillColor "255,255,255,255 | Stroke Color 0,0,0,255"][!UpdateMeter InputBox10][!Redraw]
MouseOverAction=[!SetOption InputBox10 FillColor "Fill Color 255,255,255,255 | Stroke Color 0,0,0,155"][!UpdateMeter InputBox10][!Redraw]
MouseLeaveAction=[!SetOption InputBox10 FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeter InputBox10][!Redraw]
Container=AnimationContainer

[InputStyle11]
Text=[#[#InputName11]]
InlineSetting2=
FontColor=0,0,0,255
TrailingSpaces=1
LeftMouseDownAction=[!SetOptionGroup InputBox FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeterGroup InputBox][!Redraw][!SetOption MICaret Y ([#CURRENTSECTION#:Y]+(#DropdownItemHeight#/2))][!SetOption #CURRENTSECTION# Text "[#Input11]"][!SetOption InputHandler MainMeterName "#CURRENTSECTION#"][!SetOption InputHandler TargetVariableName "[#InputName11]"][!SetOption InputHandler ContainingFilePath "[#InputLoc11]"][!UpdateMeasure InputHandler][!CommandMeasure InputHandler Initiate()][!DisableMouseAction #CURRENTSECTION# "MouseLeaveAction"][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption InputBox11 FillColor "255,255,255,255 | Stroke Color 0,0,0,255"][!UpdateMeter InputBox11][!Redraw]
MouseOverAction=[!SetOption InputBox11 FillColor "Fill Color 255,255,255,255 | Stroke Color 0,0,0,155"][!UpdateMeter InputBox11][!Redraw]
MouseLeaveAction=[!SetOption InputBox11 FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeter InputBox11][!Redraw]
Container=AnimationContainer

[InputStyle12]
Text=[#[#InputName12]]
InlineSetting2=
FontColor=0,0,0,255
TrailingSpaces=1
LeftMouseDownAction=[!SetOptionGroup InputBox FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeterGroup InputBox][!Redraw][!SetOption MICaret Y ([#CURRENTSECTION#:Y]+(#DropdownItemHeight#/2))][!SetOption #CURRENTSECTION# Text "[#Input12]"][!SetOption InputHandler MainMeterName "#CURRENTSECTION#"][!SetOption InputHandler TargetVariableName "[#InputName12]"][!SetOption InputHandler ContainingFilePath "[#InputLoc12]"][!UpdateMeasure InputHandler][!CommandMeasure InputHandler Initiate()][!DisableMouseAction #CURRENTSECTION# "MouseLeaveAction"][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption InputBox12 FillColor "255,255,255,255 | Stroke Color 0,0,0,255"][!UpdateMeter InputBox12][!Redraw]
MouseOverAction=[!SetOption InputBox12 FillColor "Fill Color 255,255,255,255 | Stroke Color 0,0,0,155"][!UpdateMeter InputBox12][!Redraw]
MouseLeaveAction=[!SetOption InputBox12 FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeter InputBox12][!Redraw]
Container=AnimationContainer

[InputStyle13]
Text=[#[#InputName13]]
InlineSetting2=
FontColor=0,0,0,255
TrailingSpaces=1
LeftMouseDownAction=[!SetOptionGroup InputBox FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeterGroup InputBox][!Redraw][!SetOption MICaret Y ([#CURRENTSECTION#:Y]+(#DropdownItemHeight#/2))][!SetOption #CURRENTSECTION# Text "[#Input13]"][!SetOption InputHandler MainMeterName "#CURRENTSECTION#"][!SetOption InputHandler TargetVariableName "[#InputName13]"][!SetOption InputHandler ContainingFilePath "[#InputLoc13]"][!UpdateMeasure InputHandler][!CommandMeasure InputHandler Initiate()][!DisableMouseAction #CURRENTSECTION# "MouseLeaveAction"][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption InputBox13 FillColor "255,255,255,255 | Stroke Color 0,0,0,255"][!UpdateMeter InputBox13][!Redraw]
MouseOverAction=[!SetOption InputBox13 FillColor "Fill Color 255,255,255,255 | Stroke Color 0,0,0,155"][!UpdateMeter InputBox13][!Redraw]
MouseLeaveAction=[!SetOption InputBox13 FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeter InputBox13][!Redraw]
Container=AnimationContainer

[InputStyle14]
Text=[#[#InputName14]]
InlineSetting2=
FontColor=0,0,0,255
TrailingSpaces=1
LeftMouseDownAction=[!SetOptionGroup InputBox FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeterGroup InputBox][!Redraw][!SetOption MICaret Y ([#CURRENTSECTION#:Y]+(#DropdownItemHeight#/2))][!SetOption #CURRENTSECTION# Text "[#Input14]"][!SetOption InputHandler MainMeterName "#CURRENTSECTION#"][!SetOption InputHandler TargetVariableName "[#InputName14]"][!SetOption InputHandler ContainingFilePath "[#InputLoc14]"][!UpdateMeasure InputHandler][!CommandMeasure InputHandler Initiate()][!DisableMouseAction #CURRENTSECTION# "MouseLeaveAction"][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption InputBox14 FillColor "255,255,255,255 | Stroke Color 0,0,0,255"][!UpdateMeter InputBox14][!Redraw]
MouseOverAction=[!SetOption InputBox14 FillColor "Fill Color 255,255,255,255 | Stroke Color 0,0,0,155"][!UpdateMeter InputBox14][!Redraw]
MouseLeaveAction=[!SetOption InputBox14 FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeter InputBox14][!Redraw]
Container=AnimationContainer
