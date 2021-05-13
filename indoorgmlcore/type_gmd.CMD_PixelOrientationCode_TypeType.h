#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_PixelOrientationCode_TypeType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_PixelOrientationCode_TypeType



namespace indoorgmlcore
{

namespace gmd
{	

class CMD_PixelOrientationCode_TypeType : public ElementType
{
public:
	indoorgmlcore_EXPORT CMD_PixelOrientationCode_TypeType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_PixelOrientationCode_TypeType(CMD_PixelOrientationCode_TypeType const& init);
	void operator=(CMD_PixelOrientationCode_TypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_PixelOrientationCode_TypeType); }

	enum EnumValues {
		Invalid = -1,
		k_center = 0, // center
		k_lowerLeft = 1, // lowerLeft
		k_lowerRight = 2, // lowerRight
		k_upperRight = 3, // upperRight
		k_upperLeft = 4, // upperLeft
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

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_PixelOrientationCode_TypeType
