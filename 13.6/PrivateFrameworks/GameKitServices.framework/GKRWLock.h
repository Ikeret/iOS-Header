//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKRWLock : NSObject
{
    struct _opaque_pthread_rwlock_t {
        long long __sig;
        char __opaque[192];
    } _rwLock;
}

- (void)unlock;
- (void)rdlock;
- (int)tryrdlock;
- (void)wrlock;
- (void)dealloc;
- (id)init;

@end

