#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeUnitTypeType2
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeUnitTypeType2



namespace indoorgmlcore
{

namespace gml
{	

class CTimeUnitTypeType2 : public TypeBase
{
public:
	indoorgmlcore_EXPORT CTimeUnitTypeType2(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTimeUnitTypeType2(CTimeUnitTypeType2 const& init);
	void operator=(CTimeUnitTypeType2 const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_gml_altova_CTimeUnitTypeType2); }
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



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeUnitTypeType2
