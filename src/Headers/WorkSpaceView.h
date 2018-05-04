// WorkspaceView.h

#ifndef WORKSPACE_VIEW_H_
#define WORKSPACE_VIEW_H_

#pragma once

#include <Wt/WTreeView>

///	WorkSpaceView: Main Application View
/// This class inherits from a WT WTreeView
class WorkSpaceView : public Wt::WTreeView
{
public:
	/// Constant that indicates the mime type for a selection of files.
	/// Every kind of dragged data should be identified using a unique mime type.
	static const char *FileSelectionMimeType;

	/// Constructor
	WorkSpaceView(Wt::WContainerWidget *parent = 0);

    /// Called when primary mouse button clicked
    void clicked();
    /// Called when primary mouse button double clicked
    void doubleClicked();

protected:	
	/// Para Drag and Drop
	virtual void dropEvent(const Wt::WDropEvent &event,	const Wt::WModelIndex &target);
};

#endif /// WORKSPACE_VIEW_H_