#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CbooleanOrNilReason
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CbooleanOrNilReason



namespace indoorgmlcore
{

namespace gml
{	

class CbooleanOrNilReason : public TypeBase
{
public:
	indoorgmlcore_EXPORT CbooleanOrNilReason(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CbooleanOrNilReason(CbooleanOrNilReason const& init);
	void operator=(CbooleanOrNilReason const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_gml_altova_CbooleanOrNilReason); }
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

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CbooleanOrNilReason
