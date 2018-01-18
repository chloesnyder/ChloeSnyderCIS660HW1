//
// Copyright (C) 
// 
// File: Hello Maya - Chloe SnyderCmd.cpp
//
// MEL Command: Hello Maya - Chloe Snyder
//
// Author: Maya Plug-in Wizard 2.0
//

// Includes everything needed to register a simple MEL command with Maya.
// 
#include <maya/MSimple.h>

// Use helper macro to register a command with Maya.  It creates and
// registers a command that does not support undo or redo.  The 
// created class derives off of MPxCommand.
//
DeclareSimpleCommand( Hello Maya - Chloe Snyder, "", "2015");

MStatus Hello Maya - Chloe Snyder::doIt( const MArgList& args )
//
//	Description:
//		implements the MEL Hello Maya - Chloe Snyder command.
//
//	Arguments:
//		args - the argument list that was passes to the command from MEL
//
//	Return Value:
//		MS::kSuccess - command succeeded
//		MS::kFailure - command failed (returning this value will cause the 
//                     MEL script that is being run to terminate unless the
//                     error is caught using a "catch" statement.
//
{
	MStatus stat = MS::kSuccess;

	// Since this class is derived off of MPxCommand, you can use the 
	// inherited methods to return values and set error messages
	//
	setResult( "Hello Maya - Chloe Snyder command executed!\n" );

	return stat;
}
