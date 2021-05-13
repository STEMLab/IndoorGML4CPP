#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_ObligationCode_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_ObligationCode_Type



namespace indoorgmlcore
{

namespace gmd
{	

class CMD_ObligationCode_Type : public TypeBase
{
public:
	indoorgmlcore_EXPORT CMD_ObligationCode_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_ObligationCode_Type(CMD_ObligationCode_Type const& init);
	void operator=(CMD_ObligationCode_Type const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_gmd_altova_CMD_ObligationCode_Type); }

	enum EnumValues {
		Invalid = -1,
		k_mandatory = 0, // mandatory
		k_optional = 1, // optional
		k_conditional = 2, // conditional
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



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_ObligationCode_Type
