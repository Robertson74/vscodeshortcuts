#include <ApplicationServices/ApplicationServices.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Move to 200x200
    CGEventRef oneU1 = CGEventCreateMouseEvent(
        NULL, kCGEventMouseMoved,
        CGPointMake(237, 183),
        kCGMouseButtonLeft // ignored
    );

    CGEventRef oneU2 = CGEventCreateMouseEvent(
        NULL, kCGEventMouseMoved,
        CGPointMake(712, 183),
        kCGMouseButtonLeft // ignored
    );

    CGEventRef oneU3 = CGEventCreateMouseEvent(
        NULL, kCGEventMouseMoved,
        CGPointMake(1187, 183),
        kCGMouseButtonLeft // ignored
    );

    CGEventRef oneU4 = CGEventCreateMouseEvent(
        NULL, kCGEventMouseMoved,
        CGPointMake(1662, 183),
        kCGMouseButtonLeft // ignored
    );
    CGEventRef oneM1 = CGEventCreateMouseEvent(
        NULL, kCGEventMouseMoved,
        CGPointMake(237, 549),
        kCGMouseButtonLeft // ignored
    );

    CGEventRef oneM2 = CGEventCreateMouseEvent(
        NULL, kCGEventMouseMoved,
        CGPointMake(712, 549),
        kCGMouseButtonLeft // ignored
    );

    CGEventRef oneM3 = CGEventCreateMouseEvent(
        NULL, kCGEventMouseMoved,
        CGPointMake(1187, 549),
        kCGMouseButtonLeft // ignored
    );

    CGEventRef oneM4 = CGEventCreateMouseEvent(
        NULL, kCGEventMouseMoved,
        CGPointMake(1662, 549),
        kCGMouseButtonLeft // ignored
    );    
    CGEventRef oneD1 = CGEventCreateMouseEvent(
        NULL, kCGEventMouseMoved,
        CGPointMake(237, 915),
        kCGMouseButtonLeft // ignored
    );

    CGEventRef oneD2 = CGEventCreateMouseEvent(
        NULL, kCGEventMouseMoved,
        CGPointMake(712, 915),
        kCGMouseButtonLeft // ignored
    );

    CGEventRef oneD3 = CGEventCreateMouseEvent(
        NULL, kCGEventMouseMoved,
        CGPointMake(1187, 915),
        kCGMouseButtonLeft // ignored
    );

    CGEventRef oneD4 = CGEventCreateMouseEvent(
        NULL, kCGEventMouseMoved,
        CGPointMake(1662, 915),
        kCGMouseButtonLeft // ignored
    );        
    CGEventRef oneCenter = CGEventCreateMouseEvent(
        NULL, kCGEventMouseMoved,
        CGPointMake(950, 550),
        kCGMouseButtonLeft // ignored
    );            
    // Move to 250x250
    // CGEventRef move2 = CGEventCreateMouseEvent(
    //     NULL, kCGEventMouseMoved,
    //     CGPointMake(250, 250),
    //     kCGMouseButtonLeft // ignored
    // );
    // Left button down at 250x250
    // CGEventRef click1_down = CGEventCreateMouseEvent(
    //     NULL, kCGEventLeftMouseDown,
    //     CGPointMake(250, 250),
    //     kCGMouseButtonLeft
    // );
    // Left button up at 250x250
    // CGEventRef click1_up = CGEventCreateMouseEvent(
    //     NULL, kCGEventLeftMouseUp,
    //     CGPointMake(250, 250),
    //     kCGMouseButtonLeft
    // );

    // Now, execute these events with an interval to make them noticeable
    if(strcmp(argv[1],"111") == 0){
        CGEventPost(kCGHIDEventTap, oneU1);
    } 
    if(strcmp(argv[1],"112") == 0){
        CGEventPost(kCGHIDEventTap, oneU2);
    } 
    if(strcmp(argv[1],"113") == 0){
        CGEventPost(kCGHIDEventTap, oneU3);
    }     
    if(strcmp(argv[1],"114") == 0){
        CGEventPost(kCGHIDEventTap, oneU4);
    }     
    if(strcmp(argv[1],"121") == 0){
        CGEventPost(kCGHIDEventTap, oneM1);
    } 
    if(strcmp(argv[1],"122") == 0){
        CGEventPost(kCGHIDEventTap, oneM2);
    } 
    if(strcmp(argv[1],"123") == 0){
        CGEventPost(kCGHIDEventTap, oneM3);
    }     
    if(strcmp(argv[1],"124") == 0){
        CGEventPost(kCGHIDEventTap, oneM4);
    }     
    if(strcmp(argv[1],"131") == 0){
        CGEventPost(kCGHIDEventTap, oneD1);
    } 
    if(strcmp(argv[1],"132") == 0){
        CGEventPost(kCGHIDEventTap, oneD2);
    } 
    if(strcmp(argv[1],"133") == 0){
        CGEventPost(kCGHIDEventTap, oneD3);
    }     
    if(strcmp(argv[1],"134") == 0){
        CGEventPost(kCGHIDEventTap, oneD4);
    }         
    if(strcmp(argv[1],"10") == 0){
        CGEventPost(kCGHIDEventTap, oneCenter);
    }
    if(argc == 3){
        CGEventRef custom = CGEventCreateMouseEvent(
        NULL, kCGEventMouseMoved,
        CGPointMake(atoi(argv[1]), atoi(argv[2])),
        kCGMouseButtonLeft // ignored
        );

        CGEventPost(kCGHIDEventTap, custom);
    }                
    // sleep(2);
    // CGEventPost(kCGHIDEventTap, oneD2);
    // sleep(2);
    // CGEventPost(kCGHIDEventTap, oneD3);
    // sleep(2);
    // CGEventPost(kCGHIDEventTap, oneD4);
    // CGEventPost(kCGHIDEventTap, move2);
    // sleep(1);
    // CGEventPost(kCGHIDEventTap, click1_down);
    // CGEventPost(kCGHIDEventTap, click1_up);

    // Release the events
    // CFRelease(click1_up);
    // CFRelease(click1_down);
    // CFRelease(move2);
    CFRelease(oneU1);
    CFRelease(oneU2);
    CFRelease(oneU3);
    CFRelease(oneU4);
    CFRelease(oneM1);
    CFRelease(oneM2);
    CFRelease(oneM3);
    CFRelease(oneM4);
    CFRelease(oneD1);
    CFRelease(oneD2);
    CFRelease(oneD3);
    CFRelease(oneD4);    
    CFRelease(oneCenter);    

    return 0;
}