//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _CFXNotificationRegistrar, _CFXNotificationRegistrationContainer;

__attribute__((visibility("hidden")))
@interface _CFXNotificationRegistrationBase : NSObject
{
    _CFXNotificationRegistrationContainer *_parent;
    struct os_lock_handoff_s _lock;
}

+ (const CDStruct_90be15af *)keyCallbacks;
- (void).cxx_destruct;
- (void)removeFromParent;
- (void)setParent:(id)arg1;
@property(readonly) __weak _CFXNotificationRegistrationContainer *parent;
@property(readonly) void *key;
@property(readonly) _CFXNotificationRegistrar *registrar;
- (void)dealloc;
- (id)initWithParent:(id)arg1;
- (id)init;

@end

