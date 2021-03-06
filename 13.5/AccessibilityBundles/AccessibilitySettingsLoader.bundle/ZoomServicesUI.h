//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ZoomServicesUI : NSObject
{
    _Bool _registeredForAppNotifications;
}

+ (_Bool)_shouldUnmapPointsForFluidGestures;
+ (_Bool)_deviceIsPortrait;
+ (struct CGPoint)_unMappedZoomPoint:(struct CGPoint)arg1;
+ (void)disableZoomServices;
+ (void)enableZoomServices;
@property(nonatomic, getter=isRegisteredForAppNotifications) _Bool registeredForAppNotifications; // @synthesize registeredForAppNotifications=_registeredForAppNotifications;
- (void)_handleAppDidEnterBackgroundNotification:(id)arg1;
- (void)_handleAppDidBecomeActiveNotification:(id)arg1;
- (void)_handleAppSwitcherWillBeginRevealNotification:(id)arg1;
- (void)_handleLockButtonWasPressedNotification:(id)arg1;
- (void)_handleAlertWillAppearNotification:(id)arg1;
- (void)_handleKeyboardDidHideNotification:(id)arg1;
- (void)_handleKeyboardWillHideNotification:(id)arg1;
- (void)_handleKeyboardWillShowNotification:(id)arg1;
- (void)_handleRegisterZoomConflictNotification:(id)arg1;
- (void)_handleZoomFocusDidChangeNotification:(id)arg1;
- (void)_handleFirstResponderDidChangeNotification:(id)arg1;
- (void)_handleSpeakUnderFingerStatusDidChangeNotification:(id)arg1;
- (void)_handleZoomEnabledStatusDidChangeNotification:(id)arg1;
- (struct CGRect)_keyboardFrameInScreenCoordinates;
- (void)_installZoomUISafeCategoriesIfNeeded;
- (void)_unregisterForAppNotifications;
- (void)_registerForAppNotifications;
- (void)_updateForCurrentZoomStatus;
- (Class)_accessibilityBundlePrincipalClass;
- (void)dealloc;
- (id)init;

@end

