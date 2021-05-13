#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_PixelOrientationCode_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_PixelOrientationCode_PropertyType



namespace indoorgmlcore
{

namespace gmd
{	

class CMD_PixelOrientationCode_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CMD_PixelOrientationCode_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_PixelOrientationCode_PropertyType(CMD_PixelOrientationCode_PropertyType const& init);
	void operator=(CMD_PixelOrientationCode_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_PixelOrientationCode_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gmd_altova_CMD_PixelOrientationCode_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gmd::CMD_PixelOrientationCode_TypeType, _altova_mi_gmd_altova_CMD_PixelOrientationCode_PropertyType_altova_MD_PixelOrientationCode> MD_PixelOrientationCode;
	struct MD_PixelOrientationCode { typedef Iterator<gmd::CMD_PixelOrientationCode_TypeType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_PixelOrientationCode_PropertyType
