"use client";

import Giscus from '@giscus/react';

export default function Comments() {
  return (
    <div className="mt-12 pt-8 border-t border-gray-100">
      <h3 className="text-xl font-bold text-gray-800 mb-6">Discussion</h3>
      <Giscus
        id="comments"
        repo="SUNGOD3/zerojudge_answer"
        repoId="R_kgDOH-RFxA"
        category="General"
        categoryId="DIC_kwDOH-RFxM4C3d4r"
        mapping="pathname"
        strict="0"
        reactionsEnabled="1"
        emitMetadata="0"
        inputPosition="top"
        theme="light"
        lang="en"
        loading="lazy"
      />
    </div>
  );
}