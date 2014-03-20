//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding.h"

@class NSFileWrapper;

@interface NSTextAttachment : NSObject <NSCoding>
{
    NSFileWrapper *_fileWrapper;
    id <NSTextAttachmentCell> _cell;
    struct {
        unsigned int cellWasExplicitlySet:1;
        unsigned int ignoresOrientation:1;
        unsigned int :30;
    } _flags;
}

+ (Class)_QTMovieViewClass;
+ (Class)_QTMovieClass;
+ (Class)_QTDataReferenceClass;
+ (void)_loadQTKit;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)attachmentCell;
- (void)setAttachmentCell:(id)arg1;
- (BOOL)ignoresOrientation;
- (void)setIgnoresOrientation:(BOOL)arg1;
- (id)fileWrapper;
- (void)setFileWrapper:(id)arg1;
- (id)initWithFileWrapper:(id)arg1;

@end
