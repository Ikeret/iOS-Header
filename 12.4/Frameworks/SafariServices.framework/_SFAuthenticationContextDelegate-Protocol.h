//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class _SFAuthenticationContext;

@protocol _SFAuthenticationContextDelegate <NSObject>

@optional
- (_Bool)contextShouldAllowMultipleBiometricFailures:(_SFAuthenticationContext *)arg1;
- (_Bool)contextShouldAllowPasscodeFallback:(_SFAuthenticationContext *)arg1;
- (_Bool)contextRequiresSessionBasedAuthentication:(_SFAuthenticationContext *)arg1;
- (double)invalidationTimeoutIfApplicationEntersBackgroundDuringAuthenticationForContext:(_SFAuthenticationContext *)arg1;
@end

