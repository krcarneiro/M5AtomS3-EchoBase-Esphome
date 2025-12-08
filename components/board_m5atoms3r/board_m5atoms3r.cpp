#include "esphome/core/log.h"
#include "board_m5atoms3r.h"

namespace esphome {
namespace board_m5atoms3r {

static const char *TAG = "board.m5atoms3r";

void BoardM5AtomS3R::setup() {

    ESP_LOGI(TAG, "setup");
    auto cfg = M5.config();
    cfg.external_speaker.atomic_echo = true;
    
    M5.begin(cfg);
    // M5.Display.fillScreen(TFT_BLUE);
    // M5.Mic.end();
    // M5.Speaker.end();
}

void BoardM5AtomS3R::loop() {

}

void BoardM5AtomS3R::dump_config(){
    ESP_LOGCONFIG(TAG, "config");
}


}  // namespace empty_component

}  // namespace esphome
