/*
 * Copyright (c) 2017-2018 Snowflake Computing, Inc. All rights reserved.
 */

#include <snowflake/Column.hpp>

Snowflake::Client::Column::Column(SF_COLUMN_DESC *column_desc_) {}

Snowflake::Client::Column::~Column() {}

int32 Snowflake::Client::Column::asInt32() {
  return 0;
}
