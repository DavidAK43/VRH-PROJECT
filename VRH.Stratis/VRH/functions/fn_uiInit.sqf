/*
	Author: Iceman77
	Parent File: fn_addAction.sqf
	Description:
		Create the dialog and  call functions to populate the listbox, set progress bars and disable buttons
*/

createDialog "VRH_Dialog";

waitUntil { !( isNull ( findDisplay IDD_VRH_DISPLAY ) ) };
_nul=[ IDC_VRH_LISTBOX_MAIN ] call VRH_fnc_lbPop;
_nul=call VRH_fnc_pBar;

{

	if ( ( _x select 0 ) == "" ) then { ctrlEnable [ ( _x select 1 ), false ]; }; 
	
} forEach [ [ uniform player, IDC_VRH_BUTTON_UNIFORM ], [ vest player, IDC_VRH_BUTTON_VEST ], [ backPack player, IDC_VRH_BUTTON_BACKPACK ] ];

nil












