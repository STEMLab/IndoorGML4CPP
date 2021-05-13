#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_TopicCategoryCode_TypeType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_TopicCategoryCode_TypeType



namespace indoorgmlcore
{

namespace gmd
{	

class CMD_TopicCategoryCode_TypeType : public ElementType
{
public:
	indoorgmlcore_EXPORT CMD_TopicCategoryCode_TypeType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_TopicCategoryCode_TypeType(CMD_TopicCategoryCode_TypeType const& init);
	void operator=(CMD_TopicCategoryCode_TypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_TopicCategoryCode_TypeType); }

	enum EnumValues {
		Invalid = -1,
		k_farming = 0, // farming
		k_biota = 1, // biota
		k_boundaries = 2, // boundaries
		k_climatologyMeteorologyAtmosphere = 3, // climatologyMeteorologyAtmosphere
		k_economy = 4, // economy
		k_elevation = 5, // elevation
		k_environment = 6, // environment
		k_geoscientificInformation = 7, // geoscientificInformation
		k_health = 8, // health
		k_imageryBaseMapsEarthCover = 9, // imageryBaseMapsEarthCover
		k_intelligenceMilitary = 10, // intelligenceMilitary
		k_inlandWaters = 11, // inlandWaters
		k_location = 12, // location
		k_oceans = 13, // oceans
		k_planningCadastre = 14, // planningCadastre
		k_society = 15, // society
		k_structure = 16, // structure
		k_transportation = 17, // transportation
		k_utilitiesCommunication = 18, // utilitiesCommunication
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

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_TopicCategoryCode_TypeType
