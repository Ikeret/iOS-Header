//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DiagnosticExtensionsDaemon/DEDAttachmentItem.h>

@class NSString, NSURLSessionUploadTask;

@interface DEDSeedingUploadItem : DEDAttachmentItem
{
    _Bool _completed;
    NSString *_extensionID;
    unsigned long long _bytesUploaded;
    NSURLSessionUploadTask *_uploadTask;
}

+ (id)itemAtPath:(id)arg1 enclosedFilename:(id)arg2 extensionID:(id)arg3;
- (void).cxx_destruct;
@property(retain) NSURLSessionUploadTask *uploadTask; // @synthesize uploadTask=_uploadTask;
@property _Bool completed; // @synthesize completed=_completed;
@property unsigned long long bytesUploaded; // @synthesize bytesUploaded=_bytesUploaded;
@property(retain) NSString *extensionID; // @synthesize extensionID=_extensionID;
- (id)description;
- (id)publicDescription;
- (id)promiseFilename;

@end

