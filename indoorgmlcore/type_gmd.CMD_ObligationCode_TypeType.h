#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_ObligationCode_TypeType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_ObligationCode_TypeType



namespace indoorgmlcore
{

namespace gmd
{	

class CMD_ObligationCode_TypeType : public ElementType
{
public:
	indoorgmlcore_EXPORT CMD_ObligationCode_TypeType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_ObligationCode_TypeType(CMD_ObligationCode_TypeType const& init);
	void operator=(CMD_ObligationCode_TypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_ObligationCode_TypeType); }

	enum EnumValues {
		Invalid = -1,
		k_mandatory = 0, // mandatory
		k_optional = 1, // optional
		k_conditional = 2, // conditional
		EnumValueCount
	};

	
	indoorgmlcore_EXPORT int GetEnumerationValue();
	indoorgmlcore_EXPORT void SetEnumerationValue( const int index);
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_ObligationCode_TypeType
