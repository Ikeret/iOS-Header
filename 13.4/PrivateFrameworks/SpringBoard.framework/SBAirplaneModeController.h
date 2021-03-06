//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/RadiosPreferencesDelegate-Protocol.h>

@class RadiosPreferences;
@protocol SBAirplaneModeDelegate;

@interface SBAirplaneModeController : NSObject <RadiosPreferencesDelegate>
{
    RadiosPreferences *_radioPrefs;
    _Bool _cachedInAirplaneMode;
    id <SBAirplaneModeDelegate> _delegate;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SBAirplaneModeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)airplaneModeChanged;
@property(nonatomic, getter=isInAirplaneMode) _Bool inAirplaneMode;
- (id)init;

@end

