//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSMachPortDelegate.h"

@class NSMachPort, NSTimer;

@interface _NSScrollerStyleRecommender : NSObject <NSMachPortDelegate>
{
    long long lastRecommendedScrollerStyle;
    NSTimer *scrollerStyleRecommendationUpdateTimer;
    struct IONotificationPort *iokitNotificationPort;
    unsigned int iokitNotificationMachPort;
    NSMachPort *iokitMachPort;
    unsigned int servicePublishNotification;
    unsigned int serviceTerminationNotification;
}

+ (id)sharedScrollerStyleRecommender;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)pointingDeviceGestureScrollSettingChanged:(id)arg1;
- (void)showScrollBarsSettingChanged:(id)arg1;
- (void)notePointingDeviceDisconnected;
- (void)notePointingDeviceConnected;
- (void)scheduleScrollerStyleRecommendationUpdate:(double)arg1;
- (void)cancelScrollerStyleRecommendationUpdate;
- (void)scrollerStyleRecommendationUpdateTimerFired:(id)arg1;
- (void)setRecommendedScrollerStyleAndNotify:(long long)arg1;
- (long long)recommendedScrollerStyle;
- (void)stopListeningForUserPreferenceNotifications;
- (void)startListeningForUserPreferenceNotifications;
- (void)stopListeningForPointingDeviceConnectAndDisconnect;
- (BOOL)startListeningForPointingDeviceConnectAndDisconnect;
- (void)handleMachMessage:(void *)arg1;

@end
