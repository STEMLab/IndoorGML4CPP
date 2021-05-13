#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_Cbase64Binary
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_Cbase64Binary



namespace indoorgmlcore
{

namespace xs
{	

class Cbase64Binary : public TypeBase
{
public:
	indoorgmlcore_EXPORT Cbase64Binary(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT Cbase64Binary(Cbase64Binary const& init);
	void operator=(Cbase64Binary const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_Cbase64Binary); }
	void operator= (const std::vector<unsigned char>& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::AnySimpleTypeFormatter);
		MsxmlTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator std::vector<unsigned char>()
	{
		return CastAs<std::vector<unsigned char> >::Do(GetNode(), 0);
	}
};



} // namespace xs

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_Cbase64Binary
