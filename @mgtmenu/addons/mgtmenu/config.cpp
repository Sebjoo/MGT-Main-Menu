class CfgPatches
{
	class MGT_MainMenu
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_UI_F"
		};
	};
};
class RscButton;
class RscPictureKeepAspect;
class IGUIBack;
class RscFrame;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscPicture{};
class RscStandardDisplay{};
class RscActiveText{};
class RscActivePicture: RscActiveText{};
class RscText{}; 
class RscDisplayMain: RscStandardDisplay
{
	idd=0;
	scriptName="RscDisplayMain";
	scriptPath="GUI";
	onLoad="[""onLoad"",_this,""RscDisplayMain"",'GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload="[""onUnload"",_this,""RscDisplayMain"",'GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
	delete Spotlight;
	class controls
	{
		delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
		delete SpotlightPrev;
		delete SpotlightNext;
		
	class logo:RscActivepicture {
            text="\mgtmenu\data\logo.paa";
            url="https://discord.gg/mgt";
            tooltip="MGT Discord";
            onButtonClick="";
            onload="";
        };
        class logoApex:logo {
            show=0;
            onload="";
            text="";
        };
		class RscMainMenuSpotlight: RscControlsGroupNoScrollbars{
			show=0;
		};
		class infomods:RscControlsgroupNoHScrollbars {
            show=0;
        };
        class infoDLCsOwned:infomods {
            show=0;
        };
        class infoDLCs:infoDLCsOwned {
            show=0;
        };
        class infoNews:infomods {
            show=0;
        };
        class infoVersion:infoNews {
            show=0;
		};
		class altisServerBtn: RscButton
		{
			idc=1100;
			x="0.85 * safezoneW + safezoneX";
			y="0.5 * safezoneH + safezoneY";
			w="0.15 * safezoneW";
			h="0.07 * safezoneH";
			colorText[]={0,0,0,0};
			colorBackground[]={0,0,0,0};
			colorActive[]={0,0,0,0};
			colorBackgroundActive[]={0,0,0,0};
			colorBackgroundDisabled[]={0,0,0,0};
			colorFocused[]={0,0,0,0};
			onButtonClick="connectToServer ['188.165.198.127', 5302, ''];";
		};
		class tanoaServerBtn: RscButton
		{
			idc=1101;
			x="0.85 * safezoneW + safezoneX";
			y="0.6 * safezoneH + safezoneY";
			w="0.15 * safezoneW";
			h="0.07 * safezoneH";
			colorText[]={0,0,0,0};
			colorBackground[]={0,0,0,0};
			colorActive[]={0,0,0,0};
			colorBackgroundActive[]={0,0,0,0};
			colorBackgroundDisabled[]={0,0,0,0};
			colorFocused[]={0,0,0,0};
			onButtonClick="connectToServer ['188.165.198.127', 4302, ''];";
		};
		class maldenServerBtn: RscButton
		{
			idc=1102;
			x="0.85 * safezoneW + safezoneX";
			y="0.7 * safezoneH + safezoneY";
			w="0.15 * safezoneW";
			h="0.07 * safezoneH";
			colorText[]={0,0,0,0};
			colorBackground[]={0,0,0,0};
			colorActive[]={0,0,0,0};
			colorBackgroundActive[]={0,0,0,0};
			colorBackgroundDisabled[]={0,0,0,0};
			colorFocused[]={0,0,0,0};
			onButtonClick="connectToServer ['149.202.89.63', 3302, ''];";
		};
		class chernoServerBtn: RscButton
		{
			idc=1103;
			x="0.85 * safezoneW + safezoneX";
			y="0.8 * safezoneH + safezoneY";
			w="0.15 * safezoneW";
			h="0.07 * safezoneH";
			colorText[]={0,0,0,0};
			colorBackground[]={0,0,0,0};
			colorActive[]={0,0,0,0};
			colorBackgroundActive[]={0,0,0,0};
			colorBackgroundDisabled[]={0,0,0,0};
			colorFocused[]={0,0,0,0};
			onButtonClick="connectToServer ['188.165.198.127', 3302, ''];";
		};
		class buttonaltis: RscPicture
        {
            idc = 1104;
            text = "mgtmenu\data\buttonaltis.paa";
            x = 0.83 * safezoneW + safezoneX;
            y = 0.5 * safezoneH + safezoneY;
            w = 0.15 * safezoneW;
            h = 0.07 * safezoneH;
			tooltip="Join the MGT Altis Exile Server";
        };
        class buttontanoa: RscPicture
        {
            idc = 1105;
            text = "mgtmenu\data\buttontanoa.paa";
            x = 0.83 * safezoneW + safezoneX;
            y = 0.6 * safezoneH + safezoneY;
            w = 0.15 * safezoneW;
            h = 0.07 * safezoneH;
			tooltip="Join the MGT Tanoa Exile Server";
        };
        class buttonmalden: RscPicture
        {
            idc = 1106;
            text = "mgtmenu\data\buttonmalden.paa";
            x = 0.83 * safezoneW + safezoneX;
            y = 0.7 * safezoneH + safezoneY;
            w = 0.15 * safezoneW;
            h = 0.07 * safezoneH;
			tooltip="Join the MGT Malden Exile Server";
        };
        class buttoncherno: RscPicture
        {
            idc = 1107;
            text = "mgtmenu\data\buttoncherno.paa";
            x = 0.83 * safezoneW + safezoneX;
            y = 0.8 * safezoneH + safezoneY;
            w = 0.15 * safezoneW;
            h = 0.07 * safezoneH;
			tooltip="Join the MGT Chernarus Exile Server";
		};
	};
	class ControlsBackground
	{	
		class joinServerBack: IGUIBack
		{
			idc=1108;
			x="0.85 * safezoneW + safezoneX";
			y="0.72 * safezoneH + safezoneY";
			w="0.15 * safezoneW";
			h="0.1 * safezoneH";
		};
		class backgroundPicture: RscPicture
		{
			idc=1109;
			text="mgtmenu\data\background.paa";
			x="0 * safezoneW + safezoneX";
			y="0 * safezoneH + safezoneY";
			w="1 * safezoneW";
			h="1 * safezoneH";
		};
	};
};
class RscDisplayStart : RscStandardDisplay {
	class controls {
		class LoadingPic : RscPicture {
			idc=1110;
			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "\mgtmenu\data\backgroundloading.paa";
		};
	};
};
