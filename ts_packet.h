#ifndef M2TS_ANALYZER_TS_PACKET
#define M2TS_ANALYZER_TS_PACKET

#include "common.h"
#include <cstdint>
#include <optional>

struct ts_packet_buf {
  uint8_t data[TS_PACKET_SIZE];
};

struct ts_packet {
public:
  ts_packet(ts_packet_buf &buf);

  bool is_valid();

  bool is_continuous(int8_t last_cc);

  ts_packet_buf &buf;

  const uint8_t sync_byte;
  const uint8_t transport_error_indicator;
  const uint8_t payload_until_start_indicator;
  const uint16_t pid;
  const uint8_t adaptation_field_control;
  const uint8_t continuity_counter;

  uint8_t *const data;
  uint8_t *const end;

  const size_t data_len;
};

#endif
