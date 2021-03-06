//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DOCKeyCommandRegistry : NSObject
{
    _Bool _singleCharKeyCommandsEnabled;
}

+ (id)_reversedDefaultIdentifiersAndKeyCommands;
+ (id)_defaultIdentifiersAndKeyCommands;
+ (id)_inputsOfAlwaysEnabledSingleCharKeyCommands;
+ (id)sharedInstance;
@property(getter=areSingleCharKeyCommandsEnabled) _Bool singleCharKeyCommandsEnabled; // @synthesize singleCharKeyCommandsEnabled=_singleCharKeyCommandsEnabled;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 defaultBehavior:(_Bool)arg3;
- (_Bool)_shouldOfferKeyCommand:(id)arg1;
- (void)_registerForKeyCommandWithIdentifier:(id)arg1 viewController:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_postNotificationForKeyCommandIdentifier:(id)arg1 modifierFlags:(long long)arg2;
- (void)registerForKeyCommandWithIdentifiers:(id)arg1 viewController:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)keyCommandWasPerformed:(id)arg1;
- (id)dismissingKeyCommandsWithAction:(SEL)arg1;
- (id)dismissingKeyCommands;
- (id)defaultKeyCommandsByExcludingKeyCommandsWithIdentifiers:(id)arg1;
- (id)init;

@end

