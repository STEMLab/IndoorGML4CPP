#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_Cduration
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_Cduration



namespace indoorgmlcore
{

namespace xs
{	

class Cduration : public TypeBase
{
public:
	indoorgmlcore_EXPORT Cduration(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT Cduration(Cduration const& init);
	void operator=(Cduration const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_Cduration); }
	void operator= (const altova::Duration& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::AnySimpleTypeFormatter);
		MsxmlTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator altova::Duration()
	{
		return CastAs<altova::Duration >::Do(GetNode(), 0);
	}
};



} // namespace xs

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_Cduration
