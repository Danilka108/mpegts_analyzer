#ifndef M2TS_ANALYZER_PSI_H
#define M2TS_ANALYZER_PSI_H

#include <cstdint>

bool stream_type_is_video(uint8_t st);

bool stream_type_is_avc(uint8_t st);

bool stream_type_is_hevc(uint8_t st);

bool stream_type_is_vvc(uint8_t st);

bool stream_type_is_audio(uint8_t st);

/**
 * Descriptor tag values (descriptor identification, DID)
 */
enum : uint16_t {

  /**
   * Invalid DID value, can be used as placeholder.
   */
  DID_NULL = 0xFF,

  // Valid in all MPEG contexts:

  /**
   * DID for video_stream_descriptor
   */
  DID_VIDEO = 0x02,

  /**
   * DID for audio_stream_descriptor
   */
  DID_AUDIO = 0x03,

  /**
   * DID for hierarchy_descriptor
   */
  DID_HIERARCHY = 0x04,

  /**
   * DID for registration_descriptor
   */
  DID_REGISTRATION = 0x05,

  /**
   * DID for data_stream_alignment_descriptor
   */
  DID_DATA_ALIGN = 0x06,

  /**
   * DID for target_background_grid_descriptor
   */
  DID_TGT_BG_GRID = 0x07,

  /**
   * DID for video_window_descriptor
   */
  DID_VIDEO_WIN = 0x08,

  /**
   * DID for CA_descriptor
   */
  DID_CA = 0x09,

  /**
   * DID for ISO_639_language_descriptor
   */
  DID_LANGUAGE = 0x0A,

  /**
   * DID for system_clock_descriptor
   */
  DID_SYS_CLOCK = 0x0B,

  /**
   * DID for multiplex_buffer_utilization_desc
   */
  DID_MUX_BUF_USE = 0x0C,

  /**
   * DID for copyright_descriptor
   */
  DID_COPYRIGHT = 0x0D,

  /**
   * DID for maximum bitrate descriptor
   */
  DID_MAX_BITRATE = 0x0E,

  /**
   * DID for private data indicator descriptor
   */
  DID_PRIV_DATA_IND = 0x0F,

  /**
   * DID for smoothing buffer descriptor
   */
  DID_SMOOTH_BUF = 0x10,

  /**
   * DID for STD_descriptor
   */
  DID_STD = 0x11,

  /**
   * DID for IBP_descriptor
   */
  DID_IBP = 0x12,

  /**
   * DID for DSM-CC carousel identifier descriptor
   */
  DID_CAROUSEL_IDENTIFIER = 0x13,

  /**
   * DID for DSM-CC association tag descriptor
   */
  DID_ASSOCIATION_TAG = 0x14,

  /**
   * DID for DSM-CC deferred association tags descriptor
   */
  DID_DEFERRED_ASSOC_TAGS = 0x15,

  /**
   * DID for DSM-CC NPT reference descriptor
   */
  DID_NPT_REFERENCE = 0x17,

  /**
   * DID for DSM-CC NPT endpoint descriptor
   */
  DID_NPT_ENDPOINT = 0x18,

  /**
   * DID for DSM-CC stream mode descriptor
   */
  DID_STREAM_MODE = 0x19,

  /**
   * DID for DSM-CC stream event descriptor
   */
  DID_STREAM_EVENT = 0x1A,

  /**
   * DID for MPEG-4_video_descriptor
   */
  DID_MPEG4_VIDEO = 0x1B,

  /**
   * DID for MPEG-4_audio_descriptor
   */
  DID_MPEG4_AUDIO = 0x1C,

  /**
   * DID for IOD_descriptor
   */
  DID_IOD = 0x1D,

  /**
   * DID for SL_descriptor
   */
  DID_SL = 0x1E,

  /**
   * DID for FMC_descriptor
   */
  DID_FMC = 0x1F,

  /**
   * DID for External_ES_id_descriptor
   */
  DID_EXT_ES_ID = 0x20,

  /**
   * DID for MuxCode_descriptor
   */
  DID_MUXCODE = 0x21,

  /**
   * DID for M4MuxBufferSize_descriptor
   */
  DID_M4MUX_BUFFER_SIZE = 0x22,

  /**
   * DID for MultiplexBuffer_descriptor
   */
  DID_MUX_BUFFER = 0x23,

  /**
   * DID for Content_labelling_descriptor
   */
  DID_CONTENT_LABELLING = 0x24,

  /**
   * DID for metadata_pointer_descriptor
   */
  DID_METADATA_POINTER = 0x25,

  /**
   * DID for metadata_descriptor
   */
  DID_METADATA = 0x26,

  /**
   * DID for metadata_STD_descriptor
   */
  DID_METADATA_STD = 0x27,

  /**
   * DID for AVC_video_descriptor
   */
  DID_AVC_VIDEO = 0x28,

  /**
   * DID for MPEG-2_IPMP_descriptor
   */
  DID_MPEG2_IPMP = 0x29,

  /**
   * DID for AVC_timing_and_HRD_descriptor
   */
  DID_AVC_TIMING_HRD = 0x2A,

  /**
   * DID for MPEG-2 AAC Audio descriptor
   */
  DID_MPEG2_AAC_AUDIO = 0x2B,

  /**
   * DID for M4MuxTiming descriptor
   */
  DID_M4_MUX_TIMING = 0x2C,

  /**
   * DID for MPEG-4 Text descriptor
   */
  DID_MPEG4_TEXT = 0x2D,

  /**
   * DID for MPEG-4 Audio Extension descriptor
   */
  DID_MPEG4_AUDIO_EXT = 0x2E,

  /**
   * DID for Auxiliary Video Stream descriptor
   */
  DID_AUX_VIDEO = 0x2F,

  /**
   * DID for SVC Extension descriptor
   */
  DID_SVC_EXT = 0x30,

  /**
   * DID for MVC Extension descriptor
   */
  DID_MVC_EXT = 0x31,

  /**
   * DID for J2K Video descriptor
   */
  DID_J2K_VIDEO = 0x32,

  /**
   * DID for MVC Operation Point descriptor
   */
  DID_MVC_OPER_POINT = 0x33,

  /**
   * DID for MPEG-2 Stereoscopic Video Format descriptor
   */
  DID_STEREO_VIDEO_FORMAT = 0x34,

  /**
   * DID for Stereoscopic Program Info descriptor
   */
  DID_STEREO_PROG_INFO = 0x35,

  /**
   * DID for Stereoscopic Video Info descriptor
   */
  DID_STEREO_VIDEO_INFO = 0x36,

  /**
   * DID for Transport Profile descriptor
   */
  DID_TRANSPORT_PROFILE = 0x37,

  /**
   * DID for HEVC Video descriptor
   */
  DID_HEVC_VIDEO = 0x38,

  /**
   * DID for VVC Video descriptor
   */
  DID_VVC_VIDEO = 0x39,

  /**
   * DID for EVC Video descriptor
   */
  DID_EVC_VIDEO = 0x3A,

  /**
   * DID for MPEG-2 Extension descriptor
   */
  DID_MPEG_EXTENSION = 0x3F,

  // Valid in DVB context:

  /**
   * DID for DVB network_name_descriptor
   */
  DID_NETWORK_NAME = 0x40,

  /**
   * DID for DVB service_list_descriptor
   */
  DID_SERVICE_LIST = 0x41,

  /**
   * DID for DVB stuffing_descriptor
   */
  DID_STUFFING = 0x42,

  /**
   * DID for DVB satellite_delivery_system_desc
   */
  DID_SAT_DELIVERY = 0x43,

  /**
   * DID for DVB cable_delivery_system_descriptor
   */
  DID_CABLE_DELIVERY = 0x44,

  /**
   * DID for DVB VBI_data_descriptor
   */
  DID_VBI_DATA = 0x45,

  /**
   * DID for DVB VBI_teletext_descriptor
   */
  DID_VBI_TELETEXT = 0x46,

  /**
   * DID for DVB bouquet_name_descriptor
   */
  DID_BOUQUET_NAME = 0x47,

  /**
   * DID for DVB service_descriptor
   */
  DID_SERVICE = 0x48,

  /**
   * DID for DVB country_availability_descriptor
   */
  DID_COUNTRY_AVAIL = 0x49,

  /**
   * DID for DVB linkage_descriptor
   */
  DID_LINKAGE = 0x4A,

  /**
   * DID for DVB NVOD_reference_descriptor
   */
  DID_NVOD_REFERENCE = 0x4B,

  /**
   * DID for DVB time_shifted_service_descriptor
   */
  DID_TIME_SHIFT_SERVICE = 0x4C,

  /**
   * DID for DVB short_event_descriptor
   */
  DID_SHORT_EVENT = 0x4D,

  /**
   * DID for DVB extended_event_descriptor
   */
  DID_EXTENDED_EVENT = 0x4E,

  /**
   * DID for DVB time_shifted_event_descriptor
   */
  DID_TIME_SHIFT_EVENT = 0x4F,

  /**
   * DID for DVB component_descriptor
   */
  DID_COMPONENT = 0x50,

  /**
   * DID for DVB mosaic_descriptor
   */
  DID_MOSAIC = 0x51,

  /**
   * DID for DVB stream_identifier_descriptor
   */
  DID_STREAM_ID = 0x52,

  /**
   * DID for DVB CA_identifier_descriptor
   */
  DID_CA_ID = 0x53,

  /**
   * DID for DVB content_descriptor
   */
  DID_CONTENT = 0x54,

  /**
   * DID for DVB parental_rating_descriptor
   */
  DID_PARENTAL_RATING = 0x55,

  /**
   * DID for DVB teletext_descriptor
   */
  DID_TELETEXT = 0x56,

  /**
   * DID for DVB telephone_descriptor
   */
  DID_TELEPHONE = 0x57,

  /**
   * DID for DVB local_time_offset_descriptor
   */
  DID_LOCAL_TIME_OFFSET = 0x58,

  /**
   * DID for DVB subtitling_descriptor
   */
  DID_SUBTITLING = 0x59,

  /**
   * DID for DVB terrestrial_delivery_system_desc
   */
  DID_TERREST_DELIVERY = 0x5A,

  /**
   * DID for DVB multilingual_network_name_desc
   */
  DID_MLINGUAL_NETWORK = 0x5B,

  /**
   * DID for DVB multilingual_bouquet_name_desc
   */
  DID_MLINGUAL_BOUQUET = 0x5C,

  /**
   * DID for DVB multilingual_service_name_desc
   */
  DID_MLINGUAL_SERVICE = 0x5D,

  /**
   * DID for DVB multilingual_component_descriptor
   */
  DID_MLINGUAL_COMPONENT = 0x5E,

  /**
   * DID for DVB private_data_specifier_descriptor
   */
  DID_PRIV_DATA_SPECIF = 0x5F,

  /**
   * DID for DVB service_move_descriptor
   */
  DID_SERVICE_MOVE = 0x60,

  /**
   * DID for DVB short_smoothing_buffer_descriptor
   */
  DID_SHORT_SMOOTH_BUF = 0x61,

  /**
   * DID for DVB frequency_list_descriptor
   */
  DID_FREQUENCY_LIST = 0x62,

  /**
   * DID for DVB partial_transport_stream_desc
   */
  DID_PARTIAL_TS = 0x63,

  /**
   * DID for DVB data_broadcast_descriptor
   */
  DID_DATA_BROADCAST = 0x64,

  /**
   * DID for DVB scrambling_descriptor
   */
  DID_SCRAMBLING = 0x65,

  /**
   * DID for DVB data_broadcast_id_descriptor
   */
  DID_DATA_BROADCAST_ID = 0x66,

  /**
   * DID for DVB transport_stream_descriptor
   */
  DID_TRANSPORT_STREAM = 0x67,

  /**
   * DID for DVB DSNG_descriptor
   */
  DID_DSNG = 0x68,

  /**
   * DID for DVB PDC_descriptor
   */
  DID_PDC = 0x69,

  /**
   * DID for DVB AC-3_descriptor
   */
  DID_AC3 = 0x6A,

  /**
   * DID for DVB ancillary_data_descriptor
   */
  DID_ANCILLARY_DATA = 0x6B,

  /**
   * DID for DVB cell_list_descriptor
   */
  DID_CELL_LIST = 0x6C,

  /**
   * DID for DVB cell_frequency_link_descriptor
   */
  DID_CELL_FREQ_LINK = 0x6D,

  /**
   * DID for DVB announcement_support_descriptor
   */
  DID_ANNOUNCE_SUPPORT = 0x6E,

  /**
   * DID for DVB application_signalling_descriptor
   */
  DID_APPLI_SIGNALLING = 0x6F,

  /**
   * DID for DVB adaptation_field_data_descriptor
   */
  DID_ADAPTFIELD_DATA = 0x70,

  /**
   * DID for DVB service_identifier_descriptor
   */
  DID_SERVICE_ID = 0x71,

  /**
   * DID for DVB service_availability_descriptor
   */
  DID_SERVICE_AVAIL = 0x72,

  /**
   * DID for DVB default_authority_descriptor
   */
  DID_DEFAULT_AUTHORITY = 0x73,

  /**
   * DID for DVB related_content_descriptor
   */
  DID_RELATED_CONTENT = 0x74,

  /**
   * DID for DVB TVA_id_descriptor
   */
  DID_TVA_ID = 0x75,

  /**
   * DID for DVB content_identifier_descriptor
   */
  DID_CONTENT_ID = 0x76,

  /**
   * DID for DVB time_slice_fec_identifier_desc
   */
  DID_TIME_SLICE_FEC_ID = 0x77,

  /**
   * DID for DVB ECM_repetition_rate_descriptor
   */
  DID_ECM_REPETITION_RATE = 0x78,

  /**
   * DID for DVB S2_satellite_delivery_system_descriptor
   */
  DID_S2_SAT_DELIVERY = 0x79,

  /**
   * DID for DVB enhanced_AC-3_descriptor
   */
  DID_ENHANCED_AC3 = 0x7A,

  /**
   * DID for DVB DTS_descriptor
   */
  DID_DTS = 0x7B,

  /**
   * DID for DVB AAC_descriptor
   */
  DID_AAC = 0x7C,

  /**
   * DID for DVB XAIT_location_descriptor (DVB-MHP)
   */
  DID_XAIT_LOCATION = 0x7D,

  /**
   * DID for DVB FTA_content_management_descriptor
   */
  DID_FTA_CONTENT_MGMT = 0x7E,

  /**
   * DID for DVB extension_descriptor
   */
  DID_DVB_EXTENSION = 0x7F,

  // Valid only in a DVB AIT (Application Information Table, ETSI TS 102 809):

  /**
   * DID for AIT application_descriptor.
   */
  DID_AIT_APPLICATION = 0x00,

  /**
   * DID for AIT application_name_descriptor.
   */
  DID_AIT_APP_NAME = 0x01,

  /**
   * DID for AIT transport_protocol_descriptor.
   */
  DID_AIT_TRANSPORT_PROTO = 0x02,

  /**
   * DID for AIT dvb_j_application_descriptor.
   */
  DID_AIT_DVBJ_APP = 0x03,

  /**
   * DID for AIT dvb_j_application_location_descriptor.
   */
  DID_AIT_DVBJ_APP_LOC = 0x04,

  /**
   * DID for AIT external_application_authorisation_descriptor.
   */
  DID_AIT_EXT_APP_AUTH = 0x05,

  /**
   * DID for AIT application_recording_descriptor.
   */
  DID_AIT_APP_RECORDING = 0x06,

  /**
   * DID for AIT dvb_html_application_descriptor.
   */
  DID_AIT_HTML_APP = 0x08,

  /**
   * DID for AIT dvb_html_application_location_descriptor.
   */
  DID_AIT_HTML_APP_LOC = 0x09,

  /**
   * DID for AIT dvb_html_application_boundary_descriptor.
   */
  DID_AIT_HTML_APP_BOUND = 0x0A,

  /**
   * DID for AIT application_icons_descriptor.
   */
  DID_AIT_APP_ICONS = 0x0B,

  /**
   * DID for AIT prefetch_descriptor.
   */
  DID_AIT_PREFETCH = 0x0C,

  /**
   * DID for AIT DII_location_descriptor.
   */
  DID_AIT_DII_LOCATION = 0x0D,

  /**
   * DID for AIT application_storage_descriptor.
   */
  DID_AIT_APP_STORAGE = 0x10,

  /**
   * DID for AIT IP_signalling_descriptor.
   */
  DID_AIT_IP_SIGNALLING = 0x11,

  /**
   * DID for AIT graphics_constraints_descriptor.
   */
  DID_AIT_GRAPHICS_CONST = 0x14,

  /**
   * DID for AIT simple_application_location_descriptor.
   */
  DID_AIT_APP_LOCATION = 0x15,

  /**
   * DID for AIT application_usage_descriptor.
   */
  DID_AIT_APP_USAGE = 0x16,

  /**
   * DID for AIT simple_application_boundary_descriptor.
   */
  DID_AIT_APP_BOUNDARY = 0x17,

  // Valid only in a DVB INT (IP/MAC Notification Table, ETSI EN 301 192):

  /**
   * DID for INT target_smartcard_descriptor
   */
  DID_INT_SMARTCARD = 0x06,

  /**
   * DID for INT target_MAC_address_descriptor
   */
  DID_INT_MAC_ADDR = 0x07,

  /**
   * DID for INT target_serial_number_descriptor
   */
  DID_INT_SERIAL_NUM = 0x08,

  /**
   * DID for INT target_IP_address_descriptor
   */
  DID_INT_IP_ADDR = 0x09,

  /**
   * DID for INT target_IPv6_address_descriptor
   */
  DID_INT_IPV6_ADDR = 0x0A,

  /**
   * DID for INT IP/MAC_platform_name_descriptor
   */
  DID_INT_PF_NAME = 0x0C,

  /**
   * DID for INT IP/MAC_platform_provider_name_descriptor
   */
  DID_INT_PF_PROVIDER = 0x0D,

  /**
   * DID for INT target_MAC_address_range_descriptor
   */
  DID_INT_MAC_ADDR_RANGE = 0x0E,

  /**
   * DID for INT target_IP_slash_descriptor
   */
  DID_INT_IP_SLASH = 0x0F,

  /**
   * DID for INT target_IP_source_slash_descriptor
   */
  DID_INT_IP_SRC_SLASH = 0x10,

  /**
   * DID for INT target_IPv6_slash_descriptor
   */
  DID_INT_IPV6_SLASH = 0x11,

  /**
   * DID for INT target_IPv6_source_slash_descriptor
   */
  DID_INT_IPV6_SRC_SLASH = 0x12,

  /**
   * DID for INT IP/MAC_stream_location_descriptor
   */
  DID_INT_STREAM_LOC = 0x13,

  /**
   * DID for INT ISP_access_mode_descriptor
   */
  DID_INT_ISP_ACCESS = 0x14,

  /**
   * DID for INT IP/MAC_generic_stream_location_descriptor
   */
  DID_INT_GEN_STREAM_LOC = 0x15,

  // Valid only in a DVB UNT (Update Notification Table, ETSI TS 102 006):

  /**
   * DID for UNT scheduling_descriptor
   */
  DID_UNT_SCHEDULING = 0x01,

  /**
   * DID for UNT update_descriptor
   */
  DID_UNT_UPDATE = 0x02,

  /**
   * DID for UNT ssu_location_descriptor
   */
  DID_UNT_SSU_LOCATION = 0x03,

  /**
   * DID for UNT message_descriptor
   */
  DID_UNT_MESSAGE = 0x04,

  /**
   * DID for UNT ssu_event_name_descriptor
   */
  DID_UNT_SSU_EVENT_NAME = 0x05,

  /**
   * DID for UNT target_smartcard_descriptor
   */
  DID_UNT_SMARTCARD = 0x06,

  /**
   * DID for UNT target_MAC_address_descriptor
   */
  DID_UNT_MAC_ADDR = 0x07,

  /**
   * DID for UNT target_serial_number_descriptor
   */
  DID_UNT_SERIAL_NUM = 0x08,

  /**
   * DID for UNT target_IP_address_descriptor
   */
  DID_UNT_IP_ADDR = 0x09,

  /**
   * DID for UNT target_IPv6_address_descriptor
   */
  DID_UNT_IPV6_ADDR = 0x0A,

  /**
   * DID for UNT ssu_subgroup_association_descriptor
   */
  DID_UNT_SUBGROUP_ASSOC = 0x0B,

  /**
   * DID for UNT enhanced_message_descriptor
   */
  DID_UNT_ENHANCED_MSG = 0x0C,

  /**
   * DID for UNT ssu_uri_descriptor
   */
  DID_UNT_SSU_URI = 0x0D,

  // Valid only in a DVB RNT (RAR Notification Table, ETSI TS 102 323):

  /**
   * DID for RNT RAR_over_DVB_stream_descriptor
   */
  DVB_RNT_RAR_OVER_DVB = 0x40,

  /**
   * DID for RNT RAR_over_IP_descriptor
   */
  DVB_RNT_RAR_OVER_IP = 0x41,

  /**
   * DID for RNT RNT_scan_dscriptor
   */
  DVB_RNT_SCAN = 0x42,

  // Valid in DVB context after PDS_LOGIWAYS private_data_specifier

  /**
   * DID for Logiways subscription_descriptor
   */
  DID_LW_SUBSCRIPTION = 0x81,

  /**
   * DID for Logiways schedule_descriptor
   */
  DID_LW_SCHEDULE = 0xB0,

  /**
   * DID for Logiways private_component_descriptor
   */
  DID_LW_PRIV_COMPONENT = 0xB1,

  /**
   * DID for Logiways private_linkage_descriptor
   */
  DID_LW_PRIV_LINKAGE = 0xB2,

  /**
   * DID for Logiways chapter_descriptor
   */
  DID_LW_CHAPTER = 0xB3,

  /**
   * DID for Logiways DRM_descriptor
   */
  DID_LW_DRM = 0xB4,

  /**
   * DID for Logiways video_size_descriptor
   */
  DID_LW_VIDEO_SIZE = 0xB5,

  /**
   * DID for Logiways episode_descriptor
   */
  DID_LW_EPISODE = 0xB6,

  /**
   * DID for Logiways price_descriptor
   */
  DID_LW_PRICE = 0xB7,

  /**
   * DID for Logiways asset_reference_descriptor
   */
  DID_LW_ASSET_REFERENCE = 0xB8,

  /**
   * DID for Logiways content_coding_descriptor
   */
  DID_LW_CONTENT_CODING = 0xB9,

  /**
   * DID for Logiways vod_command_descriptor
   */
  DID_LW_VOD_COMMAND = 0xBA,

  /**
   * DID for Logiways deletion_date_descriptor
   */
  DID_LW_DELETION_DATE = 0xBB,

  /**
   * DID for Logiways play_list_descriptor
   */
  DID_LW_PLAY_LIST = 0xBC,

  /**
   * DID for Logiways play_list_entry_descriptor
   */
  DID_LW_PLAY_LIST_ENTRY = 0xBD,

  /**
   * DID for Logiways order_code_descriptor
   */
  DID_LW_ORDER_CODE = 0xBE,

  /**
   * DID for Logiways bouquet_reference_descriptor
   */
  DID_LW_BOUQUET_REFERENCE = 0xBF,

  // Valid in DVB context after PDS_EUTELSAT private_data_specifier

  /**
   * DID for eutelsat_channel_number_descriptor
   */
  DID_EUTELSAT_CHAN_NUM = 0x83,

  // Valid in DVB context after PDS_NORDIG private_data_specifier

  /**
   * DID for nordig_logical_channel_descriptor_v1
   */
  DID_NORDIG_CHAN_NUM_V1 = 0x83,

  /**
   * DID for nordig_logical_channel_descriptor_v2
   */
  DID_NORDIG_CHAN_NUM_V2 = 0x87,

  // Valid in DVB context after PDS_EACEM/EICTA private_data_specifier

  /**
   * DID for EACEM/EICTA logical_channel_number_descriptor
   */
  DID_LOGICAL_CHANNEL_NUM = 0x83,

  /**
   * DID for EACEM/EICTA preferred_name_list_descriptor
   */
  DID_PREF_NAME_LIST = 0x84,

  /**
   * DID for EACEM/EICTA preferred_name_identifier_descriptor
   */
  DID_PREF_NAME_ID = 0x85,

  /**
   * DID for EACEM/EICTA eacem_stream_identifier_descriptor
   */
  DID_EACEM_STREAM_ID = 0x86,

  /**
   * DID for EACEM/EICTA HD_simulcast_logical_channel_number_descriptor
   */
  DID_HD_SIMULCAST_LCN = 0x88,

  // Valid in DVB context after PDS_OFCOM private_data_specifier

  /**
   * DID for OFCOM/DTG logical_channel_descriptor
   */
  DID_OFCOM_LOGICAL_CHAN = 0x83,

  /**
   * DID for OFCOM/DTG preferred_name_list_descriptor
   */
  DID_OFCOM_PREF_NAME_LST = 0x84,

  /**
   * DID for OFCOM/DTG preferred_name_identifier_descriptor
   */
  DID_OFCOM_PREF_NAME_ID = 0x85,

  /**
   * DID for OFCOM/DTG service_attribute_descriptor
   */
  DID_OFCOM_SERVICE_ATTR = 0x86,

  /**
   * DID for OFCOM/DTG short_service_name_descriptor
   */
  DID_OFCOM_SHORT_SRV_NAM = 0x87,

  /**
   * DID for OFCOM/DTG HD_simulcast_logical_channel_descriptor
   */
  DID_OFCOM_HD_SIMULCAST = 0x88,

  /**
   * DID for OFCOM/DTG guidance_descriptor
   */
  DID_OFCOM_GUIDANCE = 0x89,

  // Valid in DVB context after PDS_AUSTRALIA private_data_specifier

  /**
   * DID for Free TV Australia logical_channel_descriptor
   */
  DID_AUSTRALIA_LOGICAL_CHAN = 0x83,

  // Valid in DVB context after PDS_CANALPLUS private_data_specifier

  /**
   * DID for Canal+ DTG_Stream_indicator_descriptor
   */
  DID_DTG_STREAM_IND = 0x80,

  /**
   * DID for Canal+ pio_offset_time_descriptor
   */
  DID_PIO_OFFSET_TIME = 0X80,

  /**
   * DID for Canal+ logical_channel_descriptor
   */
  DID_LOGICAL_CHANNEL_81 = 0x81,

  /**
   * DID for Canal+ private_descriptor2
   */
  DID_PRIVATE2 = 0x82,

  /**
   * DID for Canal+ logical_channel_descriptor
   */
  DID_LOGICAL_CHANNEL = 0x83,

  /**
   * DID for Canal+ pio_content_descriptor
   */
  DID_PIO_CONTENT = 0x83,

  /**
   * DID for Canal+ pio_logo_descriptor
   */
  DID_PIO_LOGO = 0x84,

  /**
   * DID for Canal+ adsl_delivery_system_descriptor
   */
  DID_ADSL_DELIVERY = 0x85,

  /**
   * DID for Canal+ pio_fee_descriptor
   */
  DID_PIO_FEE = 0x86,

  /**
   * DID for Canal+ pio_event_range_descriptor
   */
  DID_PIO_EVENT_RANGE = 0x88,

  /**
   * DID for Canal+ pio_copy_management_descriptor
   */
  DID_PIO_COPY_MANAGEMENT = 0x8B,

  /**
   * DID for Canal+ pio_copy_control_descriptor
   */
  DID_PIO_COPY_CONTROL = 0x8C,

  /**
   * DID for Canal+ pio_ppv_descriptor
   */
  DID_PIO_PPV = 0x8E,

  /**
   * DID for Canal+ pio_stb_service_id_descriptor
   */
  DID_PIO_STB_SERVICE_ID = 0x90,

  /**
   * DID for Canal+ pio_masking_service_id_descriptor
   */
  DID_PIO_MASKING_SERV_ID = 0x91,

  /**
   * DID for Canal+ pio_stb_service_map_update_desc
   */
  DID_PIO_STB_SERVMAP_UPD = 0x92,

  /**
   * DID for Canal+ new_service_list_descriptor
   */
  DID_NEW_SERVICE_LIST = 0x93,

  /**
   * DID for Canal+ message_descriptor_Nagra
   */
  DID_MESSAGE_NAGRA = 0x94,

  /**
   * DID for Canal+ item_event_descriptor
   */
  DID_ITEM_EVENT = 0xA1,

  /**
   * DID for Canal+ item_zapping_descriptor
   */
  DID_ITEM_ZAPPING = 0xA2,

  /**
   * DID for Canal+ appli_message_descriptor
   */
  DID_APPLI_MESSAGE = 0xA3,

  /**
   * DID for Canal+ list_descriptor
   */
  DID_LIST = 0xA4,

  /**
   * DID for Canal+ key_list_descriptor
   */
  DID_KEY_LIST = 0xB0,

  /**
   * DID for Canal+ picture_signalling_descriptor
   */
  DID_PICTURE_SIGNALLING = 0xB1,

  /**
   * DID for Canal+ counter_descriptor
   */
  DID_COUNTER_BB = 0xBB,

  /**
   * DID for Canal+ data_component_descriptor
   */
  DID_DATA_COMPONENT_BD = 0xBD,

  /**
   * DID for Canal+ system_management_descriptor
   */
  DID_SYSTEM_MGMT_BE = 0xBE,

  /**
   * DID for Canal+ vo_language_descriptor
   */
  DID_VO_LANGUAGE = 0xC0,

  /**
   * DID for Canal+ data_list_descriptor
   */
  DID_DATA_LIST = 0xC1,

  /**
   * DID for Canal+ appli_list_descriptor
   */
  DID_APPLI_LIST = 0xC2,

  /**
   * DID for Canal+ message_descriptor
   */
  DID_MESSAGE = 0xC3,

  /**
   * DID for Canal+ file_descriptor
   */
  DID_FILE = 0xC4,

  /**
   * DID for Canal+ radio_format_descriptor
   */
  DID_RADIO_FORMAT = 0xC5,

  /**
   * DID for Canal+ appli_startup_descriptor
   */
  DID_APPLI_STARTUP = 0xC6,

  /**
   * DID for Canal+ patch_descriptor
   */
  DID_PATCH = 0xC7,

  /**
   * DID for Canal+ loader_descriptor
   */
  DID_LOADER = 0xC8,

  /**
   * DID for Canal+ channel_map_update_descriptor
   */
  DID_CHANNEL_MAP_UPDATE = 0xC9,

  /**
   * DID for Canal+ ppv_descriptor
   */
  DID_PPV = 0xCA,

  /**
   * DID for Canal+ counter_descriptor
   */
  DID_COUNTER_CB = 0xCB,

  /**
   * DID for Canal+ operator_info_descriptor
   */
  DID_OPERATOR_INFO = 0xCC,

  /**
   * DID for Canal+ service_default_parameters_desc
   */
  DID_SERVICE_DEF_PARAMS = 0xCD,

  /**
   * DID for Canal+ finger_printing_descriptor
   */
  DID_FINGER_PRINTING = 0xCE,

  /**
   * DID for Canal+ finger_printing_descriptor_v2
   */
  DID_FINGER_PRINTING_V2 = 0xCF,

  /**
   * DID for Canal+ concealed_geo_zones_descriptor
   */
  DID_CONCEALED_GEO_ZONES = 0xD0,

  /**
   * DID for Canal+ copy_protection_descriptor
   */
  DID_COPY_PROTECTION = 0xD1,

  /**
   * DID for Canal+ subscription_descriptor
   */
  DID_MG_SUBSCRIPTION = 0xD3,

  /**
   * DID for Canal+ cable_backchannel_delivery_system
   */
  DID_CABLE_BACKCH_DELIV = 0xD4,

  /**
   * DID for Canal+ Interactivity_snapshot_descriptor
   */
  DID_INTERACT_SNAPSHOT = 0xD5,

  /**
   * DID for Canal+ icon_position_descriptor
   */
  DID_ICON_POSITION = 0xDC,

  /**
   * DID for Canal+ icon_pixmap_descriptor
   */
  DID_ICON_PIXMAP = 0xDD,

  /**
   * DID for Canal+ Zone_coordinate_descriptor
   */
  DID_ZONE_COORDINATE = 0xDE,

  /**
   * DID for Canal+ HD_application_control_code_desc
   */
  DID_HD_APP_CONTROL_CODE = 0xDF,

  /**
   * DID for Canal+ Event_Repeat_descriptor
   */
  DID_EVENT_REPEAT = 0xE0,

  /**
   * DID for Canal+ PPV_V2_descriptor
   */
  DID_PPV_V2 = 0xE1,

  /**
   * DID for Canal+ Hyperlink_ref_descriptor
   */
  DID_HYPERLINK_REF = 0xE2,

  /**
   * DID for Canal+ Short_service_descriptor
   */
  DID_SHORT_SERVICE = 0xE4,

  /**
   * DID for Canal+ Operator_telephone_descriptor
   */
  DID_OPERATOR_TELEPHONE = 0xE5,

  /**
   * DID for Canal+ Item_reference_descriptor
   */
  DID_ITEM_REFERENCE = 0xE6,

  /**
   * DID for Canal+ MH_Parameters_descriptor
   */
  DID_MH_PARAMETERS = 0xE9,

  /**
   * DID for Canal+ Logical_reference_descriptor
   */
  DID_LOGICAL_REFERENCE = 0xED,

  /**
   * DID for Canal+ Data_Version_descriptor
   */
  DID_DATA_VERSION = 0xEE,

  /**
   * DID for Canal+ Service_group_descriptor
   */
  DID_SERVICE_GROUP = 0xEF,

  /**
   * DID for Canal+ Stream_Locator_Transport_desc
   */
  DID_STREAM_LOC_TRANSP = 0xF0,

  /**
   * DID for Canal+ Data_Locator_descriptor
   */
  DID_DATA_LOCATOR = 0xF1,

  /**
   * DID for Canal+ resident_application_descriptor
   */
  DID_RESIDENT_APP = 0xF2,

  /**
   * DID for Canal+ Resident_Application_Signalling
   */
  DID_RESIDENT_APP_SIGNAL = 0xF3,

  /**
   * DID for Canal+ MH_Logical_Reference_descriptor
   */
  DID_MH_LOGICAL_REF = 0xF8,

  /**
   * DID for Canal+ record_control_descriptor
   */
  DID_RECORD_CONTROL = 0xF9,

  /**
   * DID for Canal+ cmps_record_control_descriptor
   */
  DID_CMPS_RECORD_CONTROL = 0xFA,

  /**
   * DID for Canal+ episode_descriptor
   */
  DID_EPISODE = 0xFB,

  /**
   * DID for Canal+ CMP_Selection_descriptor
   */
  DID_CMP_SELECTION = 0xFC,

  /**
   * DID for Canal+ data_component_descriptor
   */
  DID_DATA_COMPONENT_FD = 0xFD,

  /**
   * DID for Canal+ system_management_descriptor
   */
  DID_SYSTEM_MGMT_FE = 0xFE,

  // Valid in DVB context after PDS_BSKYB private_data_specifier

  /**
   * DID for BskyB logical_channel_number_by_region_descriptor
   */
  DID_LOGICAL_CHANNEL_SKY = 0xB1,

  /**
   * DID for BskyB service_descriptor
   */
  DID_SERVICE_SKY = 0xB2,

  // Valid in DVB context after PDS_AVSVideo private_data_specifier

  /**
   * DID for AVS3 video descriptor, as defined in T/AI 109.6
   */
  DID_AVS3_VIDEO = 0xD1,

  // Valid in DVB context after PDS_AVSAudio private_data_specifier

  /**
   * DID for AVS3 audio descriptor, as defined in T/AI 109.7
   */
  DID_AVS3_AUDIO = 0xD2,

  /**
   * DID for AVS2 audio descriptor, as defined in T/AI 109.7
   */
  DID_AVS2_AUDIO = 0xD3,

  // Valid in DVB context after PDS_CUVV private_data_specifier

  /**
   * DID for UWA HDR Vivid video descriptor, as defined in T/UWA 005.2-1
   */
  DID_CUVV_HDR = 0xF3,

  // Valid in DVB context after PDS_AOM private_data_specifier

  /**
   * DID for AV1 video descriptor, as defined in
   * https://aomediacodec.github.io/av1-mpeg2-ts/
   */
  DID_AV1_VIDEO = 0x80,

  // Valid in ATSC / SCTE context:

  /**
   * DID for ATSC stuffing_descriptor
   */
  DID_ATSC_STUFFING = 0x80,

  /**
   * DID for ATSC ac3_audio_stream_descriptor
   */
  DID_ATSC_AC3 = 0x81,

  /**
   * DID for ATSC program_identifier_descriptor
   */
  DID_ATSC_PID = 0x85,

  /**
   * DID for ATSC caption_service_descriptor
   */
  DID_ATSC_CAPTION = 0x86,

  /**
   * DID for ATSC content_advisory_descriptor
   */
  DID_ATSC_CONTENT_ADVIS = 0x87,

  /**
   * DID for SCTE 35 cue_identifier_descriptor
   */
  DID_CUE_IDENTIFIER = 0x8A,

  /**
   * DID for ATSC extended_channel_name_descriptor
   */
  DID_ATSC_EXT_CHAN_NAME = 0xA0,

  /**
   * DID for ATSC service_location_descriptor
   */
  DID_ATSC_SERVICE_LOC = 0xA1,

  /**
   * DID for ATSC time_shifted_event_descriptor
   */
  DID_ATSC_TIME_SHIFT = 0xA2,

  /**
   * DID for ATSC component_name_descriptor
   */
  DID_ATSC_COMPONENT_NAME = 0xA3,

  /**
   * DID for ATSC data_broadcast_descriptor
   */
  DID_ATSC_DATA_BRDCST = 0xA4,

  /**
   * DID for ATSC pid_count_descriptor
   */
  DID_ATSC_PID_COUNT = 0xA5,

  /**
   * DID for ATSC download_descriptor
   */
  DID_ATSC_DOWNLOAD = 0xA6,

  /**
   * DID for ATSC multiprotocol_encapsulation_descriptor
   */
  DID_ATSC_MPROTO_ENCAPS = 0xA7,

  /**
   * DID for ATSC DCC_departing_request_descriptor
   */
  DID_ATSC_DCC_DEPARTING = 0xA8,

  /**
   * DID for ATSC DCC_arriving_request_descriptor
   */
  DID_ATSC_DCC_ARRIVING = 0xA9,

  /**
   * DID for ATSC redistribution_control_descriptor
   */
  DID_ATSC_REDIST_CONTROL = 0xAA,

  /**
   * DID for ATSC genre_descriptor
   */
  DID_ATSC_GENRE = 0xAB,

  /**
   * DID for ATSC private_information_descriptor
   */
  DID_ATSC_PRIVATE_INFO = 0xAD,

  /**
   * DID for ATSC E-AC-3_audio_stream_descriptor
   */
  DID_ATSC_ENHANCED_AC3 = 0xCC,

  // Valid in SCTE EAS (Emergency Alert System, SCTE 18).

  /**
   * DID for SCTE 18 In-Band Details Channel Descriptor
   */
  DID_EAS_INBAND_DETAILS = 0x00,

  /**
   * DID for SCTE 18 In-Band Exceptions Channel Descriptor
   */
  DID_EAS_INBAND_EXCEPTS = 0x01,

  /**
   * DID for SCTE 18 Audio File Descriptor
   */
  DID_EAS_AUDIO_FILE = 0x02,

  /**
   * DID for SCTE 18 / SCTE 164 Emergency Alert Metadata Descriptor
   */
  DID_EAS_METADATA = 0x03,

  // Valid only in a SCTE SIT (Splice Information Table, SCTE 35).

  /**
   * DID for SCTE 35 SIT avail_descriptor
   */
  DID_SPLICE_AVAIL = 0x00,

  /**
   * DID for SCTE 35 SIT DTMF_descriptor
   */
  DID_SPLICE_DTMF = 0x01,

  /**
   * DID for SCTE 35 SIT segmentation_descriptor
   */
  DID_SPLICE_SEGMENT = 0x02,

  /**
   * DID for SCTE 35 SIT time_descriptor
   */
  DID_SPLICE_TIME = 0x03,

  // Valid in ISDB context:

  /**
   * DID for ISDB Material information descriptor, in LIT only (WARNING:
   * conflict with DVB)
   */
  DID_ISDB_MATERIAL_INFO = 0x67,

  /**
   * DID for ISDB Hybrid information descriptor (WARNING: conflict with DVB)
   */
  DID_ISDB_HYBRID_INFO = 0x68,

  /**
   * DID for ISDB Hierarchical transmission descriptor
   */
  DID_ISDB_HIERARCH_TRANS = 0xC0,

  /**
   * DID for ISDB Digital copy control descriptor
   */
  DID_ISDB_COPY_CONTROL = 0xC1,

  /**
   * DID for ISDB Network identifier descriptor
   */
  DID_ISDB_NETWORK_ID = 0xC2,

  /**
   * DID for ISDB Partial Transport Stream time descriptor
   */
  DID_ISDB_PART_TS_TIME = 0xC3,

  /**
   * DID for ISDB Audio component descriptor
   */
  DID_ISDB_AUDIO_COMP = 0xC4,

  /**
   * DID for ISDB Hyperlink descriptor
   */
  DID_ISDB_HYPERLINK = 0xC5,

  /**
   * DID for ISDB Target region descriptor
   */
  DID_ISDB_TARGET_REGION = 0xC6,

  /**
   * DID for ISDB Data content descriptor
   */
  DID_ISDB_DATA_CONTENT = 0xC7,

  /**
   * DID for ISDB Video decode control descriptor
   */
  DID_ISDB_VIDEO_CONTROL = 0xC8,

  /**
   * DID for ISDB Download content descriptor
   */
  DID_ISDB_DOWNLOAD_CONT = 0xC9,

  /**
   * DID for ISDB CA_EMM_TS descriptor
   */
  DID_ISDB_CA_EMM_TS = 0xCA,

  /**
   * DID for ISDB CA contract information descriptor
   */
  DID_ISDB_CA_CONTRACT = 0xCB,

  /**
   * DID for ISDB CA service descriptor
   */
  DID_ISDB_CA_SERVICE = 0xCC,

  /**
   * DID for ISDB TS information descriptor
   */
  DID_ISDB_TS_INFO = 0xCD,

  /**
   * DID for ISDB Extended broadcaster descriptor
   */
  DID_ISDB_EXT_BROADCAST = 0xCE,

  /**
   * DID for ISDB Logo transmission descriptor
   */
  DID_ISDB_LOGO_TRANSM = 0xCF,

  /**
   * DID for ISDB Basic local event descriptor
   */
  DID_ISDB_BASIC_LOCAL_EV = 0xD0,

  /**
   * DID for ISDB Reference descriptor
   */
  DID_ISDB_REFERENCE = 0xD1,

  /**
   * DID for ISDB Node relation descriptor
   */
  DID_ISDB_NODE_RELATION = 0xD2,

  /**
   * DID for ISDB Short node information descriptor
   */
  DID_ISDB_SHORT_NODE_INF = 0xD3,

  /**
   * DID for ISDB STC reference descriptor
   */
  DID_ISDB_STC_REF = 0xD4,

  /**
   * DID for ISDB Series descriptor
   */
  DID_ISDB_SERIES = 0xD5,

  /**
   * DID for ISDB Event group descriptor
   */
  DID_ISDB_EVENT_GROUP = 0xD6,

  /**
   * DID for ISDB SI parameter descriptor
   */
  DID_ISDB_SI_PARAMETER = 0xD7,

  /**
   * DID for ISDB Broadcaster name descriptor
   */
  DID_ISDB_BROADCAST_NAME = 0xD8,

  /**
   * DID for ISDB Component group descriptor
   */
  DID_ISDB_COMP_GROUP = 0xD9,

  /**
   * DID for ISDB SI prime TS descriptor
   */
  DID_ISDB_SI_PRIME_TS = 0xDA,

  /**
   * DID for ISDB Board information descriptor
   */
  DID_ISDB_BOARD_INFO = 0xDB,

  /**
   * DID for ISDB LDT linkage descriptor
   */
  DID_ISDB_LDT_LINKAGE = 0xDC,

  /**
   * DID for ISDB Connected transmission descriptor
   */
  DID_ISDB_CONNECT_TRANSM = 0xDD,

  /**
   * DID for ISDB Content availability descriptor
   */
  DID_ISDB_CONTENT_AVAIL = 0xDE,

  /**
   * DID for ISDB extension descriptor
   */
  DID_ISDB_EXTENSION = 0xDF,

  /**
   * DID for ISDB Service group descriptor
   */
  DID_ISDB_SERVICE_GROUP = 0xE0,

  /**
   * DID for ISDB Area broadcast information descriptor
   */
  DID_ISDB_AREA_BCAST_INF = 0xE1,

  /**
   * DID for ISDB Network download content descriptor
   */
  DID_ISDB_NETW_DOWNLOAD = 0xE2,

  /**
   * DID for ISDB Download protection descriptor
   */
  DID_ISDB_DOWNLOAD_PROT = 0xE3,

  /**
   * DID for ISDB CA activation descriptor DID for ISDB Wired multi-carrier
   * transmission distribution system descriptor
   */
  DID_ISDB_CA_ACTIVATION = 0xE4,

  /**
   * DID for ISDB Advanced wired distribution system descriptor
   */
  DID_ISDB_ADV_WDS = 0xF4,

  /**
   * DID for ISDB Scramble method descriptor
   */
  DID_ISDB_SCRAMBLE_METH = 0xF5,

  /**
   * DID for ISDB Access control descriptor
   */
  DID_ISDB_CA = 0xF6,

  /**
   * DID for ISDB Carousel compatible composite descriptor
   */
  DID_ISDB_CAROUSEL_COMP = 0xF7,

  /**
   * DID for ISDB Conditional playback descriptor
   */
  DID_ISDB_COND_PLAYBACK = 0xF8,

  /**
   * DID for ISDB Cable TS division system descriptor
   */
  DID_ISDB_CABLE_TS_DIV = 0xF9,

  /**
   * DID for ISDB Terrestrial delivery system descriptor
   */
  DID_ISDB_TERRES_DELIV = 0xFA,

  /**
   * DID for ISDB Partial reception descriptor
   */
  DID_ISDB_PARTIAL_RECP = 0xFB,

  /**
   * DID for ISDB Emergency information descriptor
   */
  DID_ISDB_EMERGENCY_INFO = 0xFC,

  /**
   * DID for ISDB Data component descriptor
   */
  DID_ISDB_DATA_COMP = 0xFD,

  /**
   * DID for ISDB System management descriptor
   */
  DID_ISDB_SYSTEM_MGMT = 0xFE,

};

/**
 * MPEG extended descriptor tag values (in MPEG extension_descriptor)
 */
enum : uint16_t {
  /**
   * Ext.DID for ObjectDescriptorUpdate.
   */
  MPEG_EDID_OBJ_DESC_UPD = 0x02,

  /**
   * Ext.DID for HEVC_timing_and_HRD_descriptor.
   */
  MPEG_EDID_HEVC_TIM_HRD = 0x03,

  /**
   * Ext.DID for AF_extensions_descriptor
   */
  MPEG_EDID_AF_EXT = 0x04,

  /**
   * Ext.DID for HEVC_operation_point_descriptor
   */
  MPEG_EDID_HEVC_OP_POINT = 0x05,

  /**
   * Ext.DID for HEVC_hierarchy_extension_descriptor
   */
  MPEG_EDID_HEVC_HIER_EXT = 0x06,

  /**
   * Ext.DID for green_extension_descriptor
   */
  MPEG_EDID_GREEN_EXT = 0x07,

  /**
   * Ext.DID for MPEGH_3D_audio_descriptor
   */
  MPEG_EDID_MPH3D_AUDIO = 0x08,

  /**
   * Ext.DID for MPEGH_3D_audio_config_descriptor
   */
  MPEG_EDID_MPH3D_CONFIG = 0x09,

  /**
   * Ext.DID for MPEGH_3D_audio_scene_descriptor
   */
  MPEG_EDID_MPH3D_SCENE = 0x0A,

  /**
   * Ext.DID for MPEGH_3D_audio_text_label_descriptor
   */
  MPEG_EDID_MPH3D_TEXT = 0x0B,

  /**
   * Ext.DID for MPEGH_3D_audio_multi_stream_descriptor
   */
  MPEG_EDID_MPH3D_MULTI = 0x0C,

  /**
   * Ext.DID for MPEGH_3D_audio_DRC_loudness_descriptor
   */
  MPEG_EDID_MPH3D_DRCLOUD = 0x0D,

  /**
   * Ext.DID for MPEGH_3D_audio_command_descriptor
   */
  MPEG_EDID_MPH3D_COMMAND = 0x0E,

  /**
   * Ext.DID for quality_extension_descriptor
   */
  MPEG_EDID_QUALITY_EXT = 0x0F,

  /**
   * Ext.DID for virtual_segmentation_descriptor
   */
  MPEG_EDID_VIRT_SEGMENT = 0x10,

  /**
   * Ext.DID for timed_metadata_extension_descriptor
   */
  MPEG_EDID_TIMED_METADATA_EXT = 0x11,

  /**
   * Ext.DID for HEVC_tile_substream_descriptor
   */
  MPEG_EDID_HEVC_TILE_SSTRM = 0x12,

  /**
   * Ext.DID for HEVC_subregion_descriptor
   */
  MPEG_EDID_HEVC_SUBREGION = 0x13,

  /**
   * Ext.DID for JXS_video_descriptor
   */
  MPEG_EDID_JXS_VIDEO = 0x14,

  /**
   * Ext.DID for VVC_timing_and_HRD_descriptor.
   */
  MPEG_EDID_VVC_TIM_HRD = 0x15,

  /**
   * Ext.DID for EVC_timing_and_HRD_descriptor.
   */
  MPEG_EDID_EVC_TIM_HRD = 0x16,

  /**
   * Ext.DID for LCEVC_video_descriptor.
   */
  MPEG_EDID_LCEVC_VIDEO = 0x17,

  /**
   * Ext.DID for LCEVC_linkage_descriptor.
   */
  MPEG_EDID_LCEVC_LINKAGE = 0x18,

  /**
   * Ext.DID for Media_service_kind_descriptor
   */
  MPEG_EDID_MEDIA_SVC_KIND = 0x19,

  /**
   * Invalid EDID value, can be used as placeholder.
   */
  MPEG_EDID_NULL = 0xFF,

};

/**
 * DVB extended descriptor tag values (in DVB extension_descriptor)
 */
enum : uint16_t {
  /**
   * Ext.DID for image_icon_descriptor
   */
  EDID_IMAGE_ICON = 0x00,

  /**
   * Ext.DID for cpcm_delivery_signalling_descriptor
   */
  EDID_CPCM_DELIVERY_SIG = 0x01,

  /**
   * Ext.DID for CP_descriptor
   */
  EDID_CP = 0x02,

  /**
   * Ext.DID for CP_identifier_descriptor
   */
  EDID_CP_IDENTIFIER = 0x03,

  /**
   * Ext.DID for T2_delivery_system_descriptor
   */
  EDID_T2_DELIVERY = 0x04,

  /**
   * Ext.DID for SH_delivery_system_descriptor
   */
  EDID_SH_DELIVERY = 0x05,

  /**
   * Ext.DID for supplementary_audio_descriptor
   */
  EDID_SUPPL_AUDIO = 0x06,

  /**
   * Ext.DID for network_change_notify_descriptor
   */
  EDID_NETW_CHANGE_NOTIFY = 0x07,

  /**
   * Ext.DID for message_descriptor
   */
  EDID_MESSAGE = 0x08,

  /**
   * Ext.DID for target_region_descriptor
   */
  EDID_TARGET_REGION = 0x09,

  /**
   * Ext.DID for target_region_name_descriptor
   */
  EDID_TARGET_REGION_NAME = 0x0A,

  /**
   * Ext.DID for service_relocated_descriptor
   */
  EDID_SERVICE_RELOCATED = 0x0B,

  /**
   * Ext.DID for XAIT_PID_descriptor
   */
  EDID_XAIT_PID = 0x0C,

  /**
   * Ext.DID for C2_delivery_system_descriptor
   */
  EDID_C2_DELIVERY = 0x0D,

  /**
   * Ext.DID for DTS_HD_audio_stream_descriptor
   */
  EDID_DTS_HD_AUDIO = 0x0E,

  /**
   * Ext.DID for DTS_Neural_descriptor
   */
  EDID_DTS_NEURAL = 0x0F,

  /**
   * Ext.DID for video_depth_range_descriptor
   */
  EDID_VIDEO_DEPTH_RANGE = 0x10,

  /**
   * Ext.DID for T2MI_descriptor
   */
  EDID_T2MI = 0x11,

  /**
   * Ext.DID for URI_linkage_descriptor
   */
  EDID_URI_LINKAGE = 0x13,

  /**
   * Ext.DID for CI_ancillary_data_descriptor
   */
  EDID_CI_ANCILLARY_DATA = 0x14,

  /**
   * Ext.DID for AC4_descriptor
   */
  EDID_AC4 = 0x15,

  /**
   * Ext.DID for C2_bundle_system_delivery_descriptor
   */
  EDID_C2_BUNDLE_DELIVERY = 0x16,

  /**
   * Ext.DID for S2X_satellite_delivery_system_descriptor
   */
  EDID_S2X_DELIVERY = 0x17,

  /**
   * Ext.DID for protection_message_descriptor
   */
  EDID_PROTECTION_MSG = 0x18,

  /**
   * Ext.DID for audio_preselection_descriptor
   */
  EDID_AUDIO_PRESELECT = 0x19,

  /**
   * Ext.DID for TTML_subtitling_descriptor
   */
  EDID_TTML_SUBTITLING = 0x20,

  /**
   * Ext.DID for DTS-UHD_descriptor
   */
  EDID_DTS_UHD = 0x21,

  /**
   * Ext.DID for service_prominence_descriptor
   */
  EDID_SERVICE_PROMINENCE = 0x22,

  /**
   * Ext.DID for vvc_subpictures_descriptor
   */
  EDID_VVC_SUBPICTURES = 0x23,

  /**
   * Ext.DID for S2Xv2_satellite_delivery_system_descriptor
   */
  EDID_S2XV2_DELIVERY = 0x24,

  /**
   * Invalid EDID value, can be used as placeholder.
   */
  EDID_NULL = 0xFF,

};

enum : uint8_t {
  /**
   * Invalid stream type value, used to indicate an absence of value
   */
  ST_NULL = 0x00,

  /**
   * MPEG-1 Video
   */
  ST_MPEG1_VIDEO = 0x01,

  /**
   * MPEG-2 Video
   */
  ST_MPEG2_VIDEO = 0x02,

  /**
   * MPEG-1 Audio
   */
  ST_MPEG1_AUDIO = 0x03,

  /**
   * MPEG-2 Audio
   */
  ST_MPEG2_AUDIO = 0x04,

  /**
   * MPEG-2 Private sections
   */
  ST_PRIV_SECT = 0x05,

  /**
   * MPEG-2 PES private data
   */
  ST_PES_PRIV = 0x06,

  /**
   * MHEG
   */
  ST_MHEG = 0x07,

  /**
   * DSM-CC
   */
  ST_DSMCC = 0x08,

  /**
   * MPEG-2 over ATM
   */
  ST_MPEG2_ATM = 0x09,

  /**
   * DSM-CC Multi-Protocol Encapsulation
   */
  ST_DSMCC_MPE = 0x0A,

  /**
   * DSM-CC User-to-Network messages
   */
  ST_DSMCC_UN = 0x0B,

  /**
   * DSM-CC Stream Descriptors
   */
  ST_DSMCC_SD = 0x0C,

  /**
   * DSM-CC Sections
   */
  ST_DSMCC_SECT = 0x0D,

  /**
   * MPEG-2 Auxiliary
   */
  ST_MPEG2_AUX = 0x0E,

  /**
   * Advanced Audio Coding (ISO 13818-7)
   */
  ST_AAC_AUDIO = 0x0F,

  /**
   * MPEG-4 Video
   */
  ST_MPEG4_VIDEO = 0x10,

  /**
   * MPEG-4 Audio
   */
  ST_MPEG4_AUDIO = 0x11,

  /**
   * MPEG-4 SL or M4Mux in PES packets
   */
  ST_MPEG4_PES = 0x12,

  /**
   * MPEG-4 SL or M4Mux in sections
   */
  ST_MPEG4_SECT = 0x13,

  /**
   * DSM-CC Synchronized Download Protocol
   */
  ST_DSMCC_DLOAD = 0x14,

  /**
   * MPEG-7 MetaData in PES packets
   */
  ST_MDATA_PES = 0x15,

  /**
   * MPEG-7 MetaData in sections
   */
  ST_MDATA_SECT = 0x16,

  /**
   * MPEG-7 MetaData in DSM-CC Data Carousel
   */
  ST_MDATA_DC = 0x17,

  /**
   * MPEG-7 MetaData in DSM-CC Object Carousel
   */
  ST_MDATA_OC = 0x18,

  /**
   * MPEG-7 MetaData in DSM-CC Sync Download Proto
   */
  ST_MDATA_DLOAD = 0x19,

  /**
   * MPEG-2 IPMP stream
   */
  ST_MPEG2_IPMP = 0x1A,

  /**
   * AVC video
   */
  ST_AVC_VIDEO = 0x1B,

  /**
   * ISO/IEC 14496-3 Audio, without using any additional transport
   * syntax, such as DST, ALS and SLS.
   */
  ST_MPEG4_AUDIO_RAW = 0x1C,

  /**
   * ISO/IEC 14496-17 Text
   */
  ST_MPEG4_TEXT = 0x1D,

  /**
   * Auxiliary video stream as defined in ISO/IEC 23002-3
   */
  ST_AUX_VIDEO = 0x1E,

  /**
   * SVC video sub-bitstream of an AVC video stream, Annex G of ISO 14496-10
   */
  ST_AVC_SUBVIDEO_G = 0x1F,

  /**
   * MVC video sub-bitstream of an AVC video stream, Annex H of ISO 14496-10
   */
  ST_AVC_SUBVIDEO_H = 0x20,

  /**
   * JPEG 2000 video stream ISO/IEC 15444-1
   */
  ST_J2K_VIDEO = 0x21,

  /**
   * Additional view ISO/IEC 13818-2 video stream for stereoscopic 3D services
   */
  ST_MPEG2_3D_VIEW = 0x22,

  /**
   * Additional view ISO/IEC 14496-10 video stream for stereoscopic 3D services
   */
  ST_AVC_3D_VIEW = 0x23,

  /**
   * HEVC video
   */
  ST_HEVC_VIDEO = 0x24,

  /**
   * HEVC temporal video subset of an HEVC video stream
   */
  ST_HEVC_SUBVIDEO = 0x25,

  /**
   * MVCD video sub-bitstream of an AVC video stream, Annex I of ISO 14496-10
   */
  ST_AVC_SUBVIDEO_I = 0x26,

  /**
   * Timeline and External Media Information Stream
   */
  ST_EXT_MEDIA = 0x27,

  /**
   * HEVC enhancement sub-partition, Annex G of ISO 23008-2
   */
  ST_HEVC_SUBVIDEO_G = 0x28,

  /**
   * HEVC temporal enhancement sub-partition, Annex G of ISO 23008-2
   */
  ST_HEVC_SUBVIDEO_TG = 0x29,

  /**
   * HEVC enhancement sub-partition, Annex H of ISO 23008-2
   */
  ST_HEVC_SUBVIDEO_H = 0x2A,

  /**
   * HEVC temporal enhancement sub-partition, Annex H of ISO 23008-2
   */
  ST_HEVC_SUBVIDEO_TH = 0x2B,

  /**
   * Green access units carried in MPEG-2 sections
   */
  ST_GREEN = 0x2C,

  /**
   * ISO 23008-3 Audio with MHAS transport syntax - main stream
   */
  ST_MPH3D_MAIN = 0x2D,

  /**
   * ISO 23008-3 Audio with MHAS transport syntax - auxiliary stream
   */
  ST_MPH3D_AUX = 0x2E,

  /**
   * Quality access units carried in sections
   */
  ST_QUALITY = 0x2F,

  /**
   * Media Orchestration Access Units carried in sections
   */
  ST_MEDIA_ORCHESTR = 0x30,

  /**
   * HEVC substream containing Motion Constrained Tile Set
   */
  ST_HEVC_TILESET = 0x31,

  /**
   * JPEG XS video stream conforming to ISO/IEC 21122-2
   */
  ST_JPEG_XS_VIDEO = 0x32,

  /**
   * VVC/H.266 video or VVC/H.266 temporal subvideo
   */
  ST_VVC_VIDEO = 0x33,

  /**
   * VVC/H.266 temporal video subset of a VVC video stream
   */
  ST_VVC_VIDEO_SUBSET = 0x34,

  /**
   * EVC video or EVC temporal sub-video
   */
  ST_EVC_VIDEO = 0x35,

  /**
   * LCEVC video stream according to ISO/IEC 23094-2
   */
  ST_LCEVC_VIDEO = 0x36,

  /**
   * Chinese Video Standard
   */
  ST_CHINESE_VIDEO = 0x42,

  /**
   * IPMP stream
   */
  ST_IPMP = 0x7F,

  /**
   * DigiCipher II Video
   */
  ST_DGC_II_VIDEO = 0x80,

  /**
   * AC-3 Audio (ATSC only)
   */
  ST_AC3_AUDIO = 0x81,

  /**
   * ATSC AC-3 True HD Audio
   */
  ST_AC3_TRUEHD_AUDIO = 0x83,

  /**
   * ATSC AC-3+ Audio
   */
  ST_AC3_PLUS_AUDIO = 0x84,

  /**
   * SCTE 35 splice information tables
   */
  ST_SCTE35_SPLICE = 0x86,

  /**
   * Enhanced-AC-3 Audio (ATSC only)
   */
  ST_EAC3_AUDIO = 0x87,

  /**
   * A52b/AC-3 Audio
   */
  ST_A52B_AC3_AUDIO = 0x91,

  /**
   * MSCODEC Video
   */
  ST_MS_VIDEO = 0xA0,

  /**
   * Private ES (VC-1)
   */
  ST_VC1 = 0xEA,

  // Valid after a "HDMV" registration descriptor.

  /**
   * LPCM audio
   */
  ST_LPCM_AUDIO = 0x80,

  /**
   * HDMV AC-3 audio
   */
  ST_HDMV_AC3 = 0x81,

  /**
   * HDMV DTS Audio
   */
  ST_DTS_AUDIO = 0x82,

  /**
   * HDMV AC-3 True HD Audio
   */
  ST_HDMV_AC3_TRUEHD = 0x83,

  /**
   * HDMV AC-3+ Audio
   */
  ST_HDMV_AC3_PLUS = 0x84,

  /**
   * DTS-HD Audio
   */
  ST_DTS_HS_AUDIO = 0x85,

  /**
   * DTS-HD Master Audio
   */
  ST_DTS_HD_MA_AUDIO = 0x86,

  /**
   * HDMV Enhanced-AC-3 Audio
   */
  ST_HDMV_EAC3 = 0x87,

  /**
   * DTS Audio
   */
  ST_DTS_AUDIO_8A = 0x8A,

  /**
   * Subpicture PGS
   */
  ST_SUBPIC_PGS = 0x90,

  /**
   * IGS
   */
  ST_IGS = 0x91,

  /** DVD_SPU vls Subtitle */
  ST_DVD_SUBTITLES = 0x92,

  /**
   * SDDS Audio
   */
  ST_SDDS_AUDIO = 0x94,

  /**
   * HDMV AC-3+ Secondary Audio
   */
  ST_HDMV_AC3_PLS_SEC = 0xA1,

  /**
   * DTS-HD Secondary Audio
   */
  ST_DTS_HD_SEC = 0xA2,

  // Valid after an appropriate AVS registration descriptor.

  /**
   * AVS2 audio
   */
  ST_AVS2_AUDIO = 0xD3,

  /**
   * AVS3 video
   */
  ST_AVS3_VIDEO = 0xD4,

  /**
   * AVS3 audio
   */
  ST_AVS3_AUDIO = 0xD5
};

#endif