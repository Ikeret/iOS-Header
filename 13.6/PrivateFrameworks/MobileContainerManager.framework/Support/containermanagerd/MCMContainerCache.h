//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCMUserIdentityCacheObserver-Protocol.h"

@class MCMCodeSigningMapping, MCMUserIdentityCache, NSMutableDictionary;

@interface MCMContainerCache : NSObject <MCMUserIdentityCacheObserver>
{
    NSMutableDictionary *_liveContainerCache;
    NSMutableDictionary *_transientContainerCache;
    struct os_unfair_lock_s _cacheLock;
    MCMUserIdentityCache *_userIdentityCache;
    MCMCodeSigningMapping *_codeSigningMapping;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) MCMCodeSigningMapping *codeSigningMapping; // @synthesize codeSigningMapping=_codeSigningMapping;
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
- (void)userIdentityCache:(id)arg1 didInvalidateUserIdentity:(id)arg2;
- (void)_lock_invalidateUserIdentity:(id)arg1;
- (void)invalidateUserIdentity:(id)arg1;
- (_Bool)containerURL:(id)arg1 isValidForContainerClass:(unsigned long long)arg2;
- (_Bool)shouldRegisterSandboxMappingWithUserIdentity:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3;
- (_Bool)_lock_shouldRegisterSandboxMappingWithUserIdentity:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3;
- (_Bool)setSandboxContainerMappingForUserIdentity:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 url:(id)arg4;
- (_Bool)removeContainerForUserIdentity:(id)arg1 contentClass:(unsigned long long)arg2 identifier:(id)arg3 transient:(_Bool)arg4 error:(id *)arg5;
- (_Bool)addContainerMetadata:(id)arg1 url:(id)arg2 transient:(_Bool)arg3 updateSandbox:(_Bool)arg4 error:(id *)arg5;
- (id)allContainersForUserIdentity:(id)arg1 contentClass:(unsigned long long)arg2 transient:(_Bool)arg3 error:(id *)arg4;
- (id)allContainersForUserIdentity:(id)arg1 contentClass:(unsigned long long)arg2 transient:(_Bool)arg3 populateSandboxCache:(_Bool)arg4 error:(id *)arg5;
- (id)containerForContainerIdentity:(id)arg1;
- (id)containerForContainerIdentity:(id)arg1 transient:(_Bool)arg2 updateSandbox:(_Bool)arg3 error:(id *)arg4;
- (id)containerForContainerIdentity:(id)arg1 transient:(_Bool)arg2 updateSandbox:(_Bool)arg3 allowKernelLookup:(_Bool)arg4 error:(id *)arg5;
- (id)_lock_getCacheForUserIdentity:(id)arg1 contentClass:(unsigned long long)arg2 transient:(_Bool)arg3 error:(id *)arg4;
- (id)_lock_getCacheForUserIdentity:(id)arg1 contentClass:(unsigned long long)arg2 transient:(_Bool)arg3 populateSandboxCache:(_Bool)arg4 buildCache:(_Bool)arg5 error:(id *)arg6;
- (void)_lock_forEachContainerInContainerCache:(id)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)_cacheKeyForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2;
- (id)initWithUserIdentityCache:(id)arg1 codeSigningMapping:(id)arg2;

@end

