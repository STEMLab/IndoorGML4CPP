#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CKnotTypesType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CKnotTypesType



namespace indoorgmlcore
{

namespace gml
{	

class CKnotTypesType : public TypeBase
{
public:
	indoorgmlcore_EXPORT CKnotTypesType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CKnotTypesType(CKnotTypesType const& init);
	void operator=(CKnotTypesType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_gml_altova_CKnotTypesType); }

	enum EnumValues {
		Invalid = -1,
		k_uniform = 0, // uniform
		k_quasiUniform = 1, // quasiUniform
		k_piecewiseBezier = 2, // piecewiseBezier
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



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CKnotTypesType
