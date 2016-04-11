void lcd_update() {}
void lcd_init() {}
void lcd_setstatus(const char* message) {}
void lcd_setstatuspgm(const char* message) {}
void lcd_setalertstatuspgm(const char* message) {}
void lcd_reset_alert_level() {}
bool lcd_clicked()
{
    return false;
}
void lcd_setcontrast(unsigned char value) {}

void lcd_buttons_update() {}
int lcd_contrast;
