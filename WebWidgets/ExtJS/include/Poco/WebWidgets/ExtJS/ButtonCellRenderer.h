//
// ButtonCellRenderer.h
//
// $Id: //poco/Main/WebWidgets/ExtJS/include/Poco/WebWidgets/ExtJS/ButtonCellRenderer.h#5 $
//
// Library: ExtJS
// Package: Core
// Module:  ButtonCellRenderer
//
// Definition of the ButtonCellRenderer class.
//
// Copyright (c) 2007, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#ifndef ExtJS_ButtonCellRenderer_INCLUDED
#define ExtJS_ButtonCellRenderer_INCLUDED


#include "Poco/WebWidgets/ExtJS/CellRenderer.h"


namespace Poco {
namespace WebWidgets {

	class ButtonCell;
	class Button;

namespace ExtJS {


class ExtJS_API ButtonCellRenderer: public CellRenderer
	/// ButtonCellRenderer renders a button
{
public:
	static const std::string EV_CLICK;
	
	ButtonCellRenderer();
		/// Creates the ButtonCellRenderer.

	void renderHead(const Renderable* pRenderable, const RenderContext& context, std::ostream& ostr);

	void renderCell(const Cell* pCell, const RenderContext& context, std::ostream& ostr);
		/// Emits code for the page header to the given output stream.

	void writeConfigData(const Cell* pCell, const RenderContext& context, std::ostream& ostr);
		/// writes ConfigData, is a simple string

	static void renderProperties(const ButtonCell* pCell, const std::string& content, bool writeId, bool submitButton, std::ostream& ostr, bool showText = true);
		/// Renders button properties

	static void renderButton(const ButtonCell* pCell, const std::string& content, bool writeId, bool submitButton, std::ostream& ostr, bool showText = true);
		/// Renders button properties
		
	static void addClickServerCallback(Button* pCombo, const std::string& onSuccess="", const std::string& onFailure="");
		/// Adds a server callback for the buttonClicked event. The JS method signature for click is
		/// click : ( Button this, EventObject e )

protected:
	virtual ~ButtonCellRenderer();
		/// Destroys the ButtonCellRenderer.
};


} } } // namespace Poco::WebWidgets::ExtJS


#endif // ExtJS_ButtonCellRenderer_INCLUDED
