#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDecimalMinutesType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDecimalMinutesType



namespace indoorgmlcore
{

namespace gml
{	

class CDecimalMinutesType : public TypeBase
{
public:
	indoorgmlcore_EXPORT CDecimalMinutesType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDecimalMinutesType(CDecimalMinutesType const& init);
	void operator=(CDecimalMinutesType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_gml_altova_CDecimalMinutesType); }
	void operator= (const double& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::DecimalFormatter);
		MsxmlTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator double()
	{
		return CastAs<double >::Do(GetNode(), 0);
	}
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDecimalMinutesType
