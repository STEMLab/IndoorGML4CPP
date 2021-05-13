#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_CtypeType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_CtypeType



namespace indoorgmlcore
{

namespace xlink
{	

class CtypeType : public TypeBase
{
public:
	indoorgmlcore_EXPORT CtypeType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CtypeType(CtypeType const& init);
	void operator=(CtypeType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xlink_altova_CtypeType); }

	enum EnumValues {
		Invalid = -1,
		k_simple = 0, // simple
		k_extended = 1, // extended
		k_title = 2, // title
		k_resource = 3, // resource
		k_locator = 4, // locator
		k_arc = 5, // arc
		EnumValueCount
	};
	void operator= (const string_type& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::AnySimpleTypeFormatter);
		MsxmlTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator string_type()
	{
		return CastAs<string_type >::Do(GetNode(), 0);
	}
};



} // namespace xlink

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_CtypeType
