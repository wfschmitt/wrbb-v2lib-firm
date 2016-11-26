/*
 * SDカード関連
 *
 * Copyright (c) 2016 Wakayama.rb Ruby Board developers
 *
 * This software is released under the MIT License.
 * https://github.com/wakayamarb/wrbb-v2lib-firm/blob/master/MITL
 *
 */
//**************************************************
// ライブラリを定義します
//**************************************************
int sdcard_Init(mrb_state *mrb);

void SD_DateTime(uint16_t *date, uint16_t *time);
