//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchConnectivity/NSSecureCoding-Protocol.h>

@class NSDate, NSError, NSProgress, NSString, WCSessionFile;

@interface WCSessionFileTransfer : NSObject <NSSecureCoding>
{
    _Bool _transferring;
    WCSessionFile *_file;
    NSProgress *_progress;
    NSDate *_transferDate;
    NSString *_transferIdentifier;
    NSError *_transferError;
    NSProgress *_internalProgress;
    id _progressToken;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) id progressToken; // @synthesize progressToken=_progressToken;
@property(retain) NSProgress *internalProgress; // @synthesize internalProgress=_internalProgress;
@property(retain) NSError *transferError; // @synthesize transferError=_transferError;
@property(copy) NSString *transferIdentifier; // @synthesize transferIdentifier=_transferIdentifier;
@property(retain, nonatomic) NSDate *transferDate; // @synthesize transferDate=_transferDate;
@property(nonatomic, getter=isTransferring) _Bool transferring; // @synthesize transferring=_transferring;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) WCSessionFile *file; // @synthesize file=_file;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)initializeProgress;
- (long long)compare:(id)arg1;
- (void)cancel;
- (id)initWithFile:(id)arg1;
- (id)init;

@end

