#include "mbed.h"
#include "mbed_rpc.h"


void ulcd_display(int i);

int gesture(); 

void detection(Arguments *in, Reply *out);

void capture();

void stop_condition(Arguments *in, Reply *out);

void capture_mode(Arguments *in, Reply *out);

void ulcd_display_selected();

int wifi_mqtt();